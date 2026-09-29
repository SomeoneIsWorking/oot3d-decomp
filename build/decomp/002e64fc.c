// OoT3D decomp @ 002e64fc  name=FUN_002e64fc  size=328

void FUN_002e64fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = DAT_002e665c;
  if (*(int *)(DAT_002e665c + 0x48) == param_1) {
    return;
  }
  *(int *)(DAT_002e665c + 0x48) = param_1;
  if (*(int *)(iVar1 + 0x40) != 0) {
    FUN_00305830();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x40) = 0;
  }
  switch(*(undefined4 *)(iVar1 + 0x48)) {
  default:
    return;
  case 1:
    iVar2 = FUN_00313ce0(DAT_002e6660);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_002f8ee4(iVar2,1,2,0);
    }
    break;
  case 2:
    iVar2 = FUN_00313ce0(DAT_002e6660);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_002f8ee4(iVar2,1,3,0);
    }
    break;
  case 3:
    iVar2 = FUN_00313ce0(DAT_002e6660);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_002f8ee4(iVar2,1,4,0);
    }
    break;
  case 4:
    iVar2 = FUN_00313ce0(DAT_002e6660);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_002f8ee4(iVar2,1,5,0);
    }
    break;
  case 5:
    if (*(char *)((uint)*(byte *)(DAT_002e6664 + 3) + DAT_002e6668) == -1) {
      return;
    }
    iVar2 = FUN_00313ce0(DAT_002e6660);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_002f8ee4(iVar2,1,6,0);
    }
  }
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  return;
}
