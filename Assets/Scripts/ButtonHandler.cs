using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ButtonHandler : MonoBehaviour
{
    public bool isScanning = false;
    public TextMeshProUGUI buttonText;
    private void UpdateButton() 
    {
        // Debug.Log("checking text: " + buttonText.text);
        if (isScanning) {
            buttonText.text = "Stop";
        } else {
            buttonText.text = "Start";
        }
    }

    public void SetScanFlag() {
        isScanning = !isScanning;
        UpdateButton();
    }
}
