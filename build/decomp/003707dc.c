// OoT3D decomp @ 003707dc  name=FUN_003707dc  size=60

void FUN_003707dc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_00370f5c(param_2,param_1 + 0x484,param_1 + 0x4a8,0x12);
  }
  switch(*(undefined1 *)(param_1 + 0x47b)) {
  case 1:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,2);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 != 0) goto LAB_003708b0;
    break;
  case 2:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,4);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,5);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
      return;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,7);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,8);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
      return;
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,7);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 != 0) goto LAB_00370a00;
    break;
  case 5:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,2);
      uVar2 = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1ec) = uVar2;
      *(undefined4 *)(param_1 + 0x1e4) = DAT_00370b80;
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_00370a00;
  case 6:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,9);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 != 0) goto LAB_00370ae4;
    break;
  case 7:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,9);
      uVar2 = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1ec) = uVar2;
      *(undefined4 *)(param_1 + 0x1e4) = DAT_00370b80;
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_00370a00;
  case 8:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,0xb);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_00370ae4;
  case 9:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,0xc);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
LAB_003708b0:
    FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,3);
    *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    return;
  case 10:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,0xd);
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
LAB_00370ae4:
    FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,6);
    *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    return;
  case 0xb:
    if (*(char *)(param_1 + 0x47a) == '\0') {
      FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,7);
      uVar2 = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(param_1 + 0x1ec) = uVar2;
      *(undefined4 *)(param_1 + 0x1e4) = DAT_00370b80;
      *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    }
    else if (*(char *)(param_1 + 0x47a) != '\x01') {
      return;
    }
    iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_00370b7c,param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
LAB_00370a00:
    FUN_003717ac(param_1 + 0x1a4,DAT_00370b78,10);
    *(char *)(param_1 + 0x47a) = *(char *)(param_1 + 0x47a) + '\x01';
    return;
  }
  return;
}
