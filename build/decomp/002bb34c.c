// OoT3D decomp @ 002bb34c  name=FUN_002bb34c  size=228

void FUN_002bb34c(int param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  
  uVar4 = FUN_00324154(param_2 + 0x3410,param_1);
  uVar2 = *(undefined1 *)(param_1 + 0x81);
  uVar5 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar5 = FUN_0034807c(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0x30));
  }
  FUN_002bd9ec(*(undefined4 *)(param_1 + 0x3c),uVar4,*(undefined4 *)(param_1 + 0x28),uVar5,
               *(undefined1 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),uVar2,0);
  fVar3 = DAT_002bb430;
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x34) == DAT_002bb430) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002bb434 + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    fVar6 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x38) * fVar6 * DAT_002bb438;
    *(float *)(param_1 + 0x34) = fVar6;
    if (fVar3 < fVar6) {
      uVar5 = FUN_00324154(param_2 + 0x3410,param_1);
      FUN_002c3814(*(undefined4 *)(param_1 + 0x34),uVar5,*(undefined1 *)(param_1 + 0x74),
                   *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
      return;
    }
    *(float *)(param_1 + 0x34) = fVar3;
  }
  return;
}

