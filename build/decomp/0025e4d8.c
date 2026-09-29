// OoT3D decomp @ 0025e4d8  name=FUN_0025e4d8  size=420

void FUN_0025e4d8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;

  FUN_003510b0(param_1,DAT_0025e67c);
  FUN_003532e8(param_1,1);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x22c,0x18,param_1 + 0x230,8,param_1 + 0x234,0xb,0)
  ;
  uVar1 = FUN_00372f0c(uVar1,1);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x22c) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x22c) + 0xc) + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x1c1) = 0;
  *(char *)(param_1 + 0x1c0) = (char)*(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) >> 8;
  FUN_00353dd0(param_2,param_1 + 0x1d4);
  FUN_00353d24(param_2,param_1 + 0x1d4,param_1,DAT_0025e680);
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    iVar2 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0025e684;
    }
    else {
      FUN_0036df4c(param_1 + 8,DAT_0025e688);
      FUN_0036df4c(param_1 + 0x28,DAT_0025e688);
      uVar1 = DAT_0025e68c;
      *(undefined2 *)(param_1 + 0x1c2) = 0x5a;
      *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
    local_18 = FUN_00353fd4(param_1,param_2,4);
  }
  else {
    local_18 = FUN_00353fd4(param_1,param_2,7);
    uVar1 = DAT_0025e690;
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  }
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_18);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined2 *)(param_1 + 0x1c2) = 0;
  return;
}
