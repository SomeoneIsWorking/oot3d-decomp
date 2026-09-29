// OoT3D decomp @ 002452e8  name=FUN_002452e8  size=236

void FUN_002452e8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;

  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_002453d4 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + 0x10;
  uVar3 = ObjectBankArchive_00358ef8(iVar2,0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  FUN_003357dc(param_1 + 0x1a8);
  puVar1 = DAT_002453d8;
  *(int *)(param_1 + 0x1b0) = iVar2;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00337200(param_1 + 0x1a8,param_2,*(undefined4 *)(param_1 + 0x1a4),
               *(undefined4 *)(param_1 + 0x178),*puVar1,param_1 + 0x1f0,0x13);
  *(undefined1 *)(*(int *)(param_1 + 0x1b4) + 0xad) = 0;
  uVar3 = FUN_00372f0c(iVar2,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0xc),uVar3);
  uVar3 = DAT_002453dc;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x584) = uVar3;
  *(undefined4 *)(param_1 + 0x588) = uVar3;
  *(undefined1 *)(param_1 + 0x58c) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0;
  return;
}
