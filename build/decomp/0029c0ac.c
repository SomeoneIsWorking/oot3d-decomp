// OoT3D decomp @ 0029c0ac  name=z_bg_jya_bigmirror_0029c0ac  size=284

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void z_bg_jya_bigmirror_0029c0ac(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  pcVar1 = DAT_0029c1c8;
  if (*DAT_0029c1c8 == '\0') {
    FUN_0037572c(_DAT_0029c1cc,param_1);
    uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1d4,3);
    iVar3 = (**(code **)(*(int *)*DAT_0029c210 + 0xc))
                      ((int *)*DAT_0029c210,0x234,s__d__home_queen_dailyBuild_game_u_0029c1cf + 1,
                       DAT_0029c214);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00347258();
    }
    *(undefined4 *)(param_1 + 0x1dc) = uVar4;
    FUN_00340e14(param_1,param_2,uVar4,param_1 + 0x1cc);
    uVar4 = FUN_00372f0c(uVar2,2);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),uVar4);
    iVar3 = DAT_0029c218;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0x10) = 1;
    *(undefined2 *)(param_1 + 0x1a8) = *(undefined2 *)(iVar3 + 0x10);
    *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(iVar3 + 0x24);
    *(undefined1 *)(param_1 + 3) = 0xff;
    *pcVar1 = '\x01';
    *(undefined1 *)(param_1 + 0x1b5) = 1;
    *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
