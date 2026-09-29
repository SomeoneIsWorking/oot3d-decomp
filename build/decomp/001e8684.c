// OoT3D decomp @ 001e8684  name=FUN_001e8684  size=400

void FUN_001e8684(int param_1,int param_2)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;

  if (*(short *)(param_1 + 0x1c2) == 0) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_001e8818;
  }
  else {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_001e8814;
  }
  fVar1 = DAT_001e881c;
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    *(char *)(param_1 + 0x1c0) = *(char *)(param_1 + 0x1c0) + -1;
  }
  iVar3 = FUN_003705a0(*(float *)(param_1 + 0xc) - fVar1,*(undefined4 *)(param_1 + 100),
                       param_1 + 0x2c);
  if (*(char *)(param_1 + 0x1c0) == '\t') {
    if (*(short *)(param_1 + 0x1c2) != 0) goto LAB_001e87d8;
LAB_001e871c:
    FUN_00375bcc(param_1,DAT_001e8820);
    if (*(int *)(param_1 + 0x98) < DAT_001e8824) {
      uVar4 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(DAT_001e8828 + param_2) * 4 + 0xa54)
                           ,3);
      FUN_0036f7c0(uVar4,DAT_001e882c);
      FUN_0036f6b0(uVar4,5,0,0,0);
      FUN_0036f628(uVar4,3);
    }
  }
  else if (*(char *)(param_1 + 0x1c0) == '\x0f') {
    if (*(short *)(param_1 + 0x1c2) == 0) goto LAB_001e87d8;
    goto LAB_001e871c;
  }
  uVar4 = DAT_001e8834;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    *(undefined4 *)(param_1 + 100) = DAT_001e8830;
    if (*(short *)(param_1 + 0x1c2) == 0) {
      uVar2 = 0x3c;
    }
    else {
      uVar2 = 0xf;
    }
    *(undefined1 *)(param_1 + 0x1c0) = uVar2;
    FUN_00375bcc(param_1,uVar4);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001e8838;
  }
LAB_001e87d8:
  FUN_00345fe0(param_1,param_2);
  if (iVar3 == 0) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1d0);
    return;
  }
  return;
}
