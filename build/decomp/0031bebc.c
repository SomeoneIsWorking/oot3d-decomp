// OoT3D decomp @ 0031bebc  name=FUN_0031bebc  size=476

void FUN_0031bebc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*(char *)(param_1 + 0x804d) != '\0') || (iVar2 = FUN_0046651c(), iVar2 == 0)) {
    return;
  }
  FUN_0031007c(DAT_0031c058);
  uVar3 = FUN_0046bd5c();
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (uint)*(byte *)(param_1 + 5);
  }
  if ((bVar4 && uVar3 == 0) && (iVar2 = FUN_002db558(param_1), iVar2 != 0)) {
    FUN_00310040(1);
    FUN_0031025c(param_1);
    FUN_002db500(DAT_0031c05c);
    iVar2 = FUN_0046653c();
    if (iVar2 != 0) {
      FUN_0030d69c(0,0,0,0,0);
    }
    FUN_00303e50(param_1);
    iVar2 = FUN_003100d4();
    if ((iVar2 != 0) || (iVar2 = FUN_003100c4(), iVar2 != 0)) {
      FUN_00306cc0(&DAT_0031c064);
      FUN_00306c78();
      FUN_003101dc(DAT_0031c06c);
      FUN_002ea87c();
      FUN_00301f9c(0);
      FUN_00301f34(0,0,*DAT_0031c070);
    }
    FUN_00310148(DAT_0031c058);
    FUN_00468328(param_1 + 0x72fc);
    FUN_0030dbb4(1);
    uVar1 = DAT_0031c074;
    FUN_002ffe40(DAT_0031c074);
    FUN_00300084(uVar1,1);
    FUN_002db3b8(DAT_0031c05c,DAT_0031c078);
    return;
  }
  FUN_004664e8();
  FUN_00310148(DAT_0031c058);
  if (*(char *)(param_1 + 0x7313) == '\0') {
    *(undefined *)(param_1 + 0x7311) = 1;
    *(undefined *)(param_1 + 0x7313) = 1;
    *(undefined *)(param_1 + 0x7312) = 3;
    *(float *)(param_1 + 0x730c) = (DAT_00468374 - *(float *)(param_1 + 0x7308)) / DAT_00468378;
    *(undefined *)(param_1 + 0x7310) = 3;
  }
  return;
}

