// OoT3D decomp @ 004c6454  name=FUN_004c6454  size=108

void FUN_004c6454(int param_1,undefined param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 4))();
  if (iVar2 != 0) {
    FUN_002fbb20(param_1);
    uVar1 = DAT_004c64c0;
    *(undefined *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined *)(param_1 + 0x19) = 0;
    *(undefined *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined *)(param_1 + 8) = 1;
  }
  return;
}

