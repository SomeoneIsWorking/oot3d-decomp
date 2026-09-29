// OoT3D decomp @ 00470b08  name=FUN_00470b08  size=632

void FUN_00470b08(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar7 = DAT_00470da4;
  uVar3 = (uint)*(ushort *)(DAT_00470da4 + 0xc);
  switch(*(undefined1 *)(param_1 + 0x3260)) {
  case 0:
    FUN_003665fc(0x56,1,0);
    cVar2 = *(char *)(param_1 + 0x326e);
    bVar8 = cVar2 == '\0';
    if (bVar8) {
      cVar2 = *(char *)(param_1 + 0x3272);
    }
    if (bVar8 && cVar2 == '\0') {
      FUN_00483c88(*(undefined4 *)(param_1 + 0xa68));
    }
    break;
  case 1:
    if (uVar3 < DAT_00470da8) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x326e);
    bVar8 = cVar2 == '\0';
    if (bVar8) {
      cVar2 = *(char *)(param_1 + 0x3272);
    }
    if (bVar8 && cVar2 == '\0') {
      FUN_003655d0(0,0xa0);
    }
    break;
  case 2:
    if (uVar3 < 0xc001) {
      return;
    }
    FUN_0037547c(DAT_00470db4,0,4,DAT_00470db0,DAT_00470db0,DAT_00470dac);
    break;
  case 3:
    cVar2 = *(char *)(param_1 + 0x326e);
    bVar8 = cVar2 == '\0';
    if (bVar8) {
      cVar2 = *(char *)(param_1 + 0x3272);
    }
    if (bVar8 && cVar2 == '\0') {
      FUN_0033c7a4(*(undefined1 *)(param_1 + 0xa6c));
      uVar4 = 1;
LAB_00470c68:
      FUN_003665fc(uVar4,1);
    }
    break;
  case 4:
    if (uVar3 < DAT_00470db8) {
      return;
    }
    cVar2 = '\x05';
    goto LAB_00470d98;
  case 5:
    FUN_003665fc(1,1,0);
    cVar2 = *(char *)(param_1 + 0x326e);
    bVar8 = cVar2 == '\0';
    if (bVar8) {
      cVar2 = *(char *)(param_1 + 0x3272);
    }
    if (bVar8 && cVar2 == '\0') {
      uVar4 = 0x24;
      goto LAB_00470c68;
    }
    break;
  case 6:
    iVar5 = FUN_0037571c(param_1);
    if (iVar5 != 0) {
      return;
    }
    iVar6 = FUN_0036a7a0(param_1);
    iVar5 = DAT_00470dc0;
    uVar4 = DAT_00470dac;
    if (iVar6 != 0) {
      return;
    }
    if (DAT_00470dbc <= *(ushort *)(iVar7 + 0xc) - 0x4556) {
      return;
    }
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    uVar1 = DAT_00470db0;
    *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
    *(undefined1 *)(iVar5 + 0x5aa) = 1;
    FUN_0037547c(DAT_00470dc4,0,4,uVar1,uVar1,uVar4);
    iVar7 = FUN_00316cec(param_1,0x21,0x22);
    if ((iVar7 != 0) || (iVar7 = FUN_00316cec(param_1,0x2d,0x2e), iVar7 != 0)) {
      FUN_00367c7c(param_1,DAT_00470dc8,0);
    }
    break;
  case 7:
    FUN_003665fc(0x24,1,0);
    cVar2 = *(char *)(param_1 + 0x326e);
    bVar8 = cVar2 == '\0';
    if (bVar8) {
      cVar2 = *(char *)(param_1 + 0x3272);
    }
    if (bVar8 && cVar2 == '\0') {
      FUN_003665fc(0x56,1);
    }
    break;
  case 8:
    if (uVar3 <= DAT_00470dcc) {
      return;
    }
    cVar2 = '\0';
    goto LAB_00470d98;
  default:
    goto switchD_00470b28_default;
  }
  cVar2 = *(char *)(param_1 + 0x3260) + '\x01';
LAB_00470d98:
  *(char *)(param_1 + 0x3260) = cVar2;
switchD_00470b28_default:
  return;
}
