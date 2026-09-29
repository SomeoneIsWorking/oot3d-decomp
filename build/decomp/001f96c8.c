// OoT3D decomp @ 001f96c8  name=FUN_001f96c8  size=316

void FUN_001f96c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = DAT_001f9828;
  *(undefined4 *)(param_1 + 0x1c4) = DAT_001f9828;
  *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001f982c + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  do {
    uVar3 = ObjectBankArchive_00372c90(iVar2 + 0x10,iVar4 + 0x37);
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x1a8) = uVar3;
  } while (iVar4 < 4);
  if (((*DAT_001f9830 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_001f9830), iVar4 != 0)) {
    FUN_0036788c(DAT_001f9834);
  }
  uVar3 = 0x3b;
  switch(*(undefined4 *)(DAT_001f9840 + 0xf3c)) {
  case 3:
    uVar3 = 0x3e;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    uVar3 = 0x3c;
    break;
  case 8:
    uVar3 = 0x3d;
  }
  uVar3 = ObjectBankArchive_00372c90(iVar2 + 0x10,uVar3);
  *(undefined4 *)(param_1 + 0x1b8) = uVar3;
  uVar3 = DAT_001f9844;
  if ((*(short *)(param_1 + 0x1c) != 1) && (uVar3 = DAT_001f9848, *(short *)(param_1 + 0x1c) != 2))
  {
    FUN_00372f38(param_1,param_2,param_1 + 0x1a4,0x3b,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar3;
  return;
}
