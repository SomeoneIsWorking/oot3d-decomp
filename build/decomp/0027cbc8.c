// OoT3D decomp @ 0027cbc8  name=FUN_0027cbc8  size=692

void FUN_0027cbc8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_003510b0(param_1,DAT_0027ce7c);
  FUN_00372d4c(DAT_0027ce80,DAT_0027ce80,param_1 + 0xbc,0);
  FUN_0037572c(DAT_0027ce84,param_1);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0027ce88 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,1);
  FUN_00358ea8(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),9,0,0,0);
  *(undefined1 *)(param_1 + 0x19b) = 4;
  if (*(short *)(param_1 + 0x1c) < 10) {
    *(undefined2 *)(param_1 + 0x1c) = 1;
    *(undefined1 *)(param_1 + 0xb7) = 0x1e;
    uVar3 = FUN_0034faa8(param_2,param_2 + 0xa70);
    *(undefined4 *)(param_1 + 0x418) = uVar3;
    FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x41c,0xff,0xff,0xff,0xff,0);
    FUN_0036e734(param_1 + 0x1a4,6);
    uVar3 = DAT_0027ce90;
    *(undefined4 *)(param_1 + 0x1e4) = DAT_0027ce8c;
    *(undefined4 *)(param_1 + 0x238) = uVar3;
    *(undefined2 *)(param_1 + 0x250) = 1;
  }
  else {
    FUN_00370350(DAT_0027ce94,param_1 + 0x1a4,9);
    *(undefined4 *)(param_1 + 0x238) = DAT_0027ce98;
  }
  FUN_00353dd0(param_2);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x434,param_1,DAT_0027ce9c);
  FUN_00353d24(param_2,param_1 + 0x48c,param_1,DAT_0027cea0);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  iVar2 = FUN_0035b164();
  iVar4 = param_2 + 0x208c;
  if ((iVar2 != 1) &&
     (iVar2 = FUN_0036cf6c(param_2,(int)*(char *)(DAT_0027cea4 + param_2)), iVar2 != 0)) {
    FUN_00374428(param_1);
    uVar1 = DAT_0027ceac;
    uVar3 = DAT_0027cea8;
    z_actor_003738d0(DAT_0027ceb0,DAT_0027ceac,DAT_0027cea8,iVar4,param_2,0x5d,0,0,0,0xffffffff,1);
    z_actor_003738d0(DAT_0027ceb4,uVar1,uVar3,iVar4,param_2,0x5f,0,0,0,0,1);
    return;
  }
  FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),iVar4,param_1,param_2,0x67,0,0,0,
               (int)*(short *)(param_1 + 0x1c));
  return;
}
