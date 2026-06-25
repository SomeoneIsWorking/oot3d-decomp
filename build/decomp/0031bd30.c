// OoT3D decomp @ 0031bd30  name=FUN_0031bd30  size=360

void FUN_0031bd30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x804d) != '\0') || (iVar2 = FUN_004665e8(), iVar2 == 0)) {
    return;
  }
  FUN_0031007c(DAT_0031be98);
  if ((*(char *)(param_1 + 5) == '\0') && (iVar2 = FUN_002db558(param_1), iVar2 != 0)) {
    FUN_00310040(1);
    FUN_0031025c(param_1);
    FUN_002db500(DAT_0031be9c);
    iVar2 = FUN_00466420();
    if (iVar2 != 0) {
      FUN_0030d69c(0,0,0,0,0);
    }
    FUN_00303e50(param_1);
    iVar2 = FUN_003100d4();
    if ((iVar2 != 0) || (iVar2 = FUN_003100c4(), iVar2 != 0)) {
      FUN_00306cc0(&DAT_0031bea4);
      FUN_00306c78();
      FUN_003101dc(DAT_0031beac);
      FUN_002ea87c();
      FUN_00301f9c(0);
      FUN_00301f34(0,0,*DAT_0031beb0);
    }
    FUN_00310148(DAT_0031be98);
    FUN_0030dbb4(1);
    uVar1 = DAT_0031beb4;
    FUN_002ffe40(DAT_0031beb4);
    FUN_00300084(uVar1,1);
    FUN_002db3b8(DAT_0031be9c,DAT_0031beb8);
    return;
  }
  FUN_00310148(DAT_0031be98);
  return;
}

