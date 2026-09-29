// OoT3D decomp @ 003cd920  name=FUN_003cd920  size=348

void FUN_003cd920(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;

  uVar3 = DAT_003cda84;
  FUN_00372d4c(DAT_003cda84,DAT_003cda7c,param_1 + 0xbc,DAT_003cda80);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_003cda88);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  iVar1 = DAT_003cda90;
  *(undefined4 *)(param_1 + 0x13c) = DAT_003cda8c;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x284);
  FUN_00372f38(param_1,param_2,param_1 + 0x2a0,
               *(undefined4 *)(iVar1 + *(short *)(param_1 + 0x1c) * 4),0);
  puVar2 = DAT_003cda94;
  iVar5 = (int)*(short *)(param_1 + 0x1c);
  uVar4 = extraout_r3;
  if (iVar5 == 0) {
    uVar4 = 0x10;
  }
  if (iVar5 != 0) {
    uVar4 = 0x13;
  }
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,*(undefined4 *)(iVar1 + iVar5 * 4),
               DAT_003cda94[iVar5],0,0,uVar4);
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0036e734(param_1 + 0x1fc,*puVar2);
  }
  else {
    uVar4 = FUN_0036ae14(param_1 + 0x1fc,puVar2[*(short *)(param_1 + 0x1c)]);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003cda98,uVar3,uVar4,uVar3,param_1 + 0x1fc,puVar2[*(short *)(param_1 + 0x1c)],0
                );
  }
  iVar1 = DAT_003cdaa0;
  *(undefined2 *)(param_1 + 0x280) = *(undefined2 *)(DAT_003cda9c + *(short *)(param_1 + 0x1c) * 2);
  uVar3 = DAT_003cdaa4;
  if ((*(ushort *)(param_1 + 0x280) & *(ushort *)(iVar1 + 6)) != 0) {
    uVar3 = *(undefined4 *)(DAT_003cdaa8 + *(short *)(param_1 + 0x1c) * 4);
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  return;
}
