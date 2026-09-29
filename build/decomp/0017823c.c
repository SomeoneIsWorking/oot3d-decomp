// OoT3D decomp @ 0017823c  name=FUN_0017823c  size=480

void FUN_0017823c(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  int iVar7;
  float fVar8;
  float fVar9;

  uVar4 = DAT_00178470;
  iVar7 = DAT_00178468;
  fVar2 = DAT_0017845c;
  iVar6 = *(int *)(DAT_00178458 + param_2);
  if (*(byte *)(param_1 + 0x9e1) == 0) {
    iVar7 = FUN_00363e64(iVar6,param_1 + 8);
    if (iVar7 < DAT_00178460) {
      if ((*(short *)(param_1 + 0x9e8) == 0) ||
         (sVar1 = *(short *)(param_1 + 0x9e8) + -1, *(short *)(param_1 + 0x9e8) = sVar1, sVar1 == 0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x9e8) = 0x96;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x124) + 0x9dc);
    if (iVar3 == DAT_00178468) {
      *(undefined4 *)(param_1 + 0x140) = DAT_0017846c;
      FUN_00370350(uVar4,param_1 + 0x1a4,2);
      iVar6 = FUN_0036ae14(param_1 + 0x1a4,2);
      fVar9 = DAT_00178478;
      fVar2 = DAT_00178474;
      if ((iVar6 + 1) * 7 < 1) {
        iVar6 = FUN_0036ae14(param_1 + 0x1a4,2);
        fVar8 = (float)VectorSignedToFloat((iVar6 + 1) * 7,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar8 * fVar2 * fVar9 - fVar9;
      }
      else {
        iVar6 = FUN_0036ae14(param_1 + 0x1a4,2);
        fVar8 = (float)VectorSignedToFloat((iVar6 + 1) * 7,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 + fVar8 * fVar2 * fVar9;
      }
      *(short *)(param_1 + 0x9e6) = (short)(int)fVar9;
      iVar6 = *(int *)(param_1 + 0x124);
      if (iVar6 == 0) {
        *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
        *(short *)(param_1 + 0x9e6) = (short)(int)fVar9 + 1;
      }
      else {
        uVar4 = *(undefined4 *)(iVar6 + 0x2c);
        uVar5 = *(undefined4 *)(iVar6 + 0x30);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar6 + 0x28);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        *(undefined4 *)(param_1 + 0x30) = uVar5;
        *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(*(int *)(param_1 + 0x124) + 0xbe);
      }
      if (*(char *)(param_1 + 0x9e1) == '\0') {
        FUN_00375bcc(param_1,DAT_0017847c);
      }
      *(int *)(param_1 + 0x9dc) = iVar7;
    }
    else {
      if (iVar3 == DAT_00178480) {
        *(ushort *)(param_1 + 0xbe) =
             *(short *)(*(int *)(param_1 + 0x124) + 0xbe) +
             (ushort)*(byte *)(param_1 + 0x9e1) * 0x4000;
        *(float *)(param_1 + 0x2c) = *(float *)(iVar6 + 0x2c) + fVar2;
        FUN_0034c050(param_1,param_2);
        return;
      }
      if (iVar3 == DAT_00178484) {
        FUN_00374428(param_1);
        return;
      }
    }
  }
  return;
}
