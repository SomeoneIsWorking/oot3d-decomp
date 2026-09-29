// OoT3D decomp @ 003df390  name=FUN_003df390  size=404

void FUN_003df390(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = uRam003df528;
  uVar4 = uRam003df524;
  iVar3 = FUN_003736fc(uRam003df528,uRam003df524,param_1 + 0x1a4);
  if (iVar3 == 0) {
    iVar3 = FUN_003736fc(uRam003df52c,uVar4,param_1 + 0x1a4);
    if (((iVar3 != 0) || (iVar3 = FUN_003736fc(uRam003df530,uVar4,param_1 + 0x1a4), iVar3 != 0)) ||
       (iVar3 = FUN_003736fc(uRam003df534,uVar4,param_1 + 0x1a4), iVar3 != 0)) goto LAB_003df430;
  }
  else {
    if (*(short *)(param_1 + 0x7dc) != 0) {
      *(short *)(param_1 + 0x7dc) = *(short *)(param_1 + 0x7dc) + -1;
    }
LAB_003df430:
    FUN_00375bcc(param_1,uRam003df538);
  }
  if ((*(int *)(param_1 + 0x98) < iRam003df53c) &&
     (iVar3 = FUN_0036f18c(param_1,0x4000), uVar4 = uRam003df540, iVar3 != 0)) {
    *(undefined2 *)(param_1 + 0x7dc) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    FUN_0036f4e4(uRam003df544,param_1 + 0x1a4);
    uVar4 = uRam003df548;
LAB_003df518:
    *(undefined4 *)(param_1 + 0x7d8) = uVar4;
    return;
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    if ((iRam003df54c <= *(int *)(param_1 + 0x98)) ||
       (iVar3 = FUN_0036f18c(param_1,0x4000), iVar3 != 0)) {
      if (*(short *)(param_1 + 0x7dc) != 0) {
        return;
      }
      FUN_00373d40(param_1 + 0x1a4,8);
      uVar4 = uRam003df550;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      goto LAB_003df518;
    }
    *(undefined2 *)(param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x92);
  }
  else {
    *(undefined2 *)(param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x82);
  }
  uVar1 = DAT_00363e48;
  uVar4 = DAT_00363e44;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00363e44;
  iVar3 = (int)(short)(*(short *)(param_1 + 0x7de) - *(short *)(param_1 + 0xbe));
  if (iVar3 < 1) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00363e4c,uVar2,uVar4,uVar1,param_1 + 0x1a4,3,2);
  }
  else {
    FUN_00374a58(uVar1,param_1 + 0x1a4,3);
  }
  if (DAT_00363e50 < *(int *)(param_1 + 0x54)) {
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7de) = (short)(int)(fVar5 * DAT_00363e54);
  }
  else {
    FUN_0036f4e4(*(float *)(param_1 + 0x1e4) * DAT_00363e58,param_1 + 0x1a4);
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x7de) = (short)(int)(fVar5 * DAT_00363e5c);
  }
  *(undefined4 *)(param_1 + 0x7d8) = DAT_00363e60;
  return;
}
