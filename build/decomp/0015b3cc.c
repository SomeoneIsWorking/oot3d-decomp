// OoT3D decomp @ 0015b3cc  name=FUN_0015b3cc  size=392

void FUN_0015b3cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;

  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1bc));
  if (iVar1 != 0) {
    local_18 = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1bc);
    FUN_003532e8(param_1,0);
    if (*(short *)(param_1 + 0x1c) == 0) {
      if (*(char *)(param_1 + 0x1e) == 'h') {
        uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,0);
        unaff_r7 = FUN_003532c0(uVar2,0);
      }
    }
    else {
      uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0,0);
      uVar3 = FUN_00372f0c(uVar2,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0xc),uVar3);
      auStack_34[1] = *DAT_0015b554;
      auStack_34[2] = DAT_0015b554[1];
      auStack_34[3] = DAT_0015b554[2];
      uStack_24 = DAT_0015b554[3];
      uStack_20 = DAT_0015b554[4];
      uStack_1c = DAT_0015b554[5];
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 0xc) = DAT_0015b558;
      if (*DAT_0015b55c == 0) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 8) =
             auStack_34[*(short *)(param_1 + 0x1c)];
        FUN_003586ec();
      }
      unaff_r7 = FUN_003532c0(uVar2,0);
      if (*(short *)(param_1 + 0x1c) == 1) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
      }
    }
    local_18 = unaff_r7;
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,unaff_r7);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    *(undefined4 *)(param_1 + 0x1c0) = DAT_0015b560;
    *(undefined4 *)(param_1 + 0x140) = DAT_0015b564;
  }
  return;
}
