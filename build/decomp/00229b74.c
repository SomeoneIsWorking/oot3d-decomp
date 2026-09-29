// OoT3D decomp @ 00229b74  name=FUN_00229b74  size=184

void FUN_00229b74(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_88 [30];

  if (*(short *)(param_2 + 0x104) != 0x60) {
    *(undefined2 *)(param_1 + 0x1b2) = 1;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x1b2);
  bVar5 = uVar2 == 0;
  if (bVar5) {
    uVar2 = *(uint *)(DAT_00229c2c + 4);
  }
  if ((bVar5 && uVar2 == 0) && ((*(ushort *)(DAT_00229c30 + 0xf4) & 0x200) != 0)) {
    FUN_00374428(param_1);
  }
  puVar3 = local_88;
  bVar5 = false;
  iVar4 = 0x1e;
  do {
    if (bVar5) {
      *puVar3 = 2;
    }
    else {
      *puVar3 = 3;
    }
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + 1;
    bVar5 = (bool)(bVar5 ^ 1);
  } while (iVar4 != 0);
  FUN_00352ee0(param_1,param_2,0x1e,param_1 + 0x708,local_88);
  uVar1 = DAT_00229c34;
  *(undefined1 *)(param_1 + 0x19b) = 3;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
