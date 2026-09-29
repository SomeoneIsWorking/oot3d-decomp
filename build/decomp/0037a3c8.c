// OoT3D decomp @ 0037a3c8  name=FUN_0037a3c8  size=432

void FUN_0037a3c8(int param_1,int param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;

  if ((*(short *)(param_1 + 0x1c8) == 0) ||
     (sVar3 = *(short *)(param_1 + 0x1c8) + -1, *(short *)(param_1 + 0x1c8) = sVar3, sVar3 == 0)) {
    *(undefined2 *)(param_1 + 0x1c8) = 4;
  }
  if ((*(byte *)(param_1 + 0x1dc) & 2) == 0) goto LAB_0037a4ec;
  *(byte *)(param_1 + 0x1dc) = *(byte *)(param_1 + 0x1dc) & 0xfd;
  if (DAT_0037a578 < *(int *)(param_1 + 0x98)) {
    iVar4 = (int)*(short *)(param_1 + 0x92);
  }
  else if (*(short *)(param_1 + 0x1c) == 0) {
    sVar2 = *(short *)(param_1 + 0xbe);
    sVar3 = *(short *)(param_1 + 0x92) - sVar2;
    if (sVar3 < 0x2001) {
      if (sVar3 < -0x2000) {
        sVar2 = sVar2 + -0x6000;
      }
      else if (sVar3 < 1) {
        sVar2 = sVar2 + 0x2000;
      }
      else {
        sVar2 = sVar2 + -0x2000;
      }
    }
    else {
      sVar2 = sVar2 + 0x6000;
    }
    iVar4 = (int)sVar2;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x92);
    if (sVar3 < 0x6001) {
      iVar4 = DAT_0037a57c;
      if (sVar3 < 0x4001) {
        if (sVar3 < 0x2001) {
          if (0 < sVar3) goto LAB_0037a4a8;
          iVar4 = DAT_0037a580;
          if (((sVar3 < -0x6000) || (iVar4 = DAT_0037a57c, sVar3 < -0x4000)) ||
             (iVar4 = DAT_0037a580, -0x2001 < sVar3)) goto LAB_0037a4d8;
        }
        iVar4 = 0;
      }
    }
    else {
LAB_0037a4a8:
      iVar4 = 0x4000;
    }
  }
LAB_0037a4d8:
  FUN_00374bb8(DAT_0037a588,DAT_0037a584,param_2,param_1,iVar4);
LAB_0037a4ec:
  (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  uVar1 = DAT_0037a58c;
  sVar3 = *(short *)(param_1 + 0x1c0);
  if (*(short *)(param_1 + 0x1c) != 0) {
    if (sVar3 < 1) {
      sVar3 = *(short *)(param_1 + 0x1c2);
    }
    if (sVar3 < 1) {
      sVar3 = *(short *)(param_1 + 0x1c4);
    }
    if (sVar3 < 1) {
      sVar3 = *(short *)(param_1 + 0x1c6);
    }
  }
  if (sVar3 < 1) {
    return;
  }
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1cc);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1cc);
  FUN_00373264(param_1,uVar1);
  return;
}
