# LockOnPlugin

## Usage

- Download the LockOn folder and paste it into [your-project's-path]/Plugins folder
- To test it:
  - Open your project and set the Default Pawn Class to LockOn/Content/Blueprints/BP_ThirdPersonCharacter_LockOn
  - Use the LockOn/Content/Blueprints/BP_Enemy to test the funcionality
- To include it in your own BPs, all you need to do is add the logic in BP_ThirdPersonCharacter_LockOn and BP_Enemy to your own BPs

The default controls are:

- F: Enable/Disable LockOn
- Tab: Swap between targets

The method ULockOnComponent::FaceCurrentControllerDirection() can be used separate from the LockOn logic to instantly face a LockOn components's owner to whichever direction its Controller is currently facing. Used together with GetCharacterMovement()->bOrientRotationToMovement = [false/true] (for temporary stop automatic character's rotation), can come in handy for Dodge or other directional animations.

## Demo

https://github.com/HerManNav/LockOnPlugin/assets/2845892/b660eb77-4ab7-43ad-8470-56276d64d0fd

