// OoT3D decomp @ 00104218  name=FUN_00104218  size=348

void FUN_00104218(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r5;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  undefined1 auStack_64 [48];
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  uVar3 = FUN_0036ae14(param_1 + 0x1a4,9);
  fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) == fVar6) << 0x1e;
  bVar5 = false;
  if (SUB41(uVar1 >> 0x1e,0)) {
    unaff_r5 = param_1 + 0xa00;
    bVar5 = *(short *)(param_1 + 0xa10) == 0;
  }
  if (bVar5) {
    cVar2 = *(char *)(param_1 + 0xa18);
    if (cVar2 == '\0') {
      FUN_00372a60(param_1 + 0x1a4);
      FUN_003729b8(param_1,8);
      return;
    }
    local_28 = DAT_00104374;
    local_24 = DAT_00104378;
    local_20 = DAT_0010437c;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(uVar1 >> 0x15) & 3);
    FUN_003735e8(fVar6 * DAT_00104380 * DAT_00104384,auStack_64,0);
    FUN_003735ac(&local_34,auStack_64,&local_28);
    local_34 = local_34 + *(float *)(param_1 + 0x28);
    local_2c = local_2c + *(float *)(param_1 + 0x30);
    local_30 = *(float *)(param_1 + 0x2c) + DAT_00104388;
    iVar4 = z_actor_003738d0(param_2 + 0x208c,param_2,DAT_0010438c,(int)*(short *)(param_1 + 0xbc),
                             (int)*(short *)(param_1 + 0xbe),(int)*(short *)(param_1 + 0xc0),0,1);
    uVar3 = DAT_00104394;
    if (iVar4 != 0) {
      *(undefined2 *)(DAT_00104390 + iVar4) = 100;
      *(undefined4 *)(iVar4 + 0x6c) = uVar3;
    }
    *(undefined2 *)(unaff_r5 + 0x10) = 6;
    *(char *)(param_1 + 0xa18) = cVar2 + -1;
  }
  return;
}
