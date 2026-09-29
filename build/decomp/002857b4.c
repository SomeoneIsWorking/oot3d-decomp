// OoT3D decomp @ 002857b4  name=FUN_002857b4  size=400

void FUN_002857b4(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;

  fVar1 = DAT_00285944;
  uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_00285944 <= *(float *)(param_1 + 0x6c)) << 0x1d;
  if (!SUB41(uVar6 >> 0x1d,0)) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_00285948;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_0028594c;
  if (iVar3 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  uVar5 = DAT_0028595c;
  if (*(char *)(param_1 + 0x841) == '\0') {
    if ((*(int *)(param_1 + 0x98) <= DAT_00285958) &&
       (iVar3 = FUN_0036f18c(param_1,DAT_00285960), iVar3 != 0)) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,5);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar6 >> 0x15) & 3);
      FUN_00374a58(uVar5,param_1 + 0x1a4,5);
      *(undefined1 *)(param_1 + 0x840) = 0;
      *(undefined2 *)(param_1 + 0x84c) = 0;
      *(float *)(param_1 + 0x6c) = fVar1;
      *(undefined1 *)(param_1 + 0x84b) = 4;
      *(undefined4 *)(param_1 + 0x844) = DAT_00285964;
      FUN_00375c08(uVar2,DAT_00285968,uVar4,uVar5,param_1 + 0x1a4,5,2);
      goto LAB_00285934;
    }
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,3);
    fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(uVar6 >> 0x15) & 3);
    FUN_00375c08(uVar2,fVar1,fVar7 - DAT_0028596c,uVar5,param_1 + 0x1a4,3,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined1 *)(param_1 + 0x84b) = 3;
    *(short *)(param_1 + 0x84c) = (short)DAT_00285970;
    uVar5 = DAT_00285974;
  }
  else {
    FUN_00370350(DAT_00285950,param_1 + 0x1a4,1);
    *(undefined1 *)(param_1 + 0x84b) = 1;
    *(undefined2 *)(param_1 + 0x84c) = 0x69;
    uVar5 = DAT_00285954;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x844) = uVar5;
LAB_00285934:
  *(undefined1 *)(param_1 + 0x848) = 0xff;
  return;
}
