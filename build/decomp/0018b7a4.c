// OoT3D decomp @ 0018b7a4  name=FUN_0018b7a4  size=336

void FUN_0018b7a4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  uVar1 = DAT_0018b8fc;
  FUN_00372d4c(DAT_0018b8fc,DAT_0018b8f4,param_1 + 0xbc,DAT_0018b8f8);
  FUN_00372f38(param_1,param_2,param_1 + 0xa50,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,0,9,param_1 + 0x280,param_1 + 0x65c,0x13);
  FUN_0036e734(param_1 + 0x1fc,9);
  FUN_0035c358(param_1 + 0xa54,param_1 + 0x1fc,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0018b900);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(DAT_0018b904,param_1);
  puVar2 = DAT_0018b908;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  puVar3 = DAT_0018b90c;
  *(undefined4 *)(param_1 + 0xa4c) = *puVar2;
  uVar5 = FUN_0036ae14(param_1 + 0x1fc,*puVar3);
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0018b914,uVar1,uVar5,DAT_0018b910,param_1 + 0x1fc,*puVar3,
               *(undefined1 *)(puVar3 + -2));
  uVar1 = DAT_0018b920;
  iVar4 = DAT_0018b918;
  *(undefined4 *)(param_1 + 0xa4c) = DAT_0018b91c;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = DAT_0018b924;
  *(undefined2 *)(iVar4 + param_1) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  return;
}
