// OoT3D decomp @ 00419a0c  name=FUN_00419a0c  size=356

void FUN_00419a0c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  iVar2 = FUN_0041b284();
  if (iVar2 == 0) {
    FUN_0041b1fc();
    uVar3 = FUN_0041b29c(8,2,1);
    uVar4 = FUN_0035010c();
    iVar2 = DAT_00419b70;
    *(undefined4 *)(DAT_00419b70 + 4) = uVar4;
    iVar5 = FUN_0041b45c(8,2,uVar4,uVar3,1);
    if (iVar5 < 0) {
      FUN_0030e3ac(iVar5,&DAT_00419b74,0,&DAT_00419b74);
      FUN_002fb928(0);
    }
    iVar5 = DAT_00419b78;
    *(undefined1 *)(iVar2 + 1) = 1;
    iVar2 = FUN_004220e8(iVar5 + -0x4c,iVar5,0x10);
    if (iVar2 < 0) {
      FUN_0030e3ac(iVar2,&DAT_00419b74,0,&DAT_00419b74);
      FUN_002fb928(0);
    }
    FUN_002ffb10(DAT_00419b7c,0x4000);
    do {
      uVar3 = *DAT_00419b80;
      bVar1 = (bool)hasExclusiveAccess(DAT_00419b80);
    } while (!bVar1);
    *DAT_00419b80 = 0xfffffffe;
    FUN_00310148(DAT_00419b80,uVar3);
    local_10 = DAT_00419b84;
    local_20 = 4;
    local_1c = DAT_00419b8c;
    local_18 = DAT_00419b90;
    local_14 = DAT_00419b94;
    uVar6 = FUN_0030dbf8(DAT_00419b98,&local_20,DAT_00419b88,&local_10,
                         *(int *)(DAT_00419b7c + 0xc) + *(int *)(DAT_00419b7c + 8),0xf,0xfffffffe,0)
    ;
    uVar7 = uVar6 >> 0x1b;
    if ((uVar6 & 0x80000000) != 0) {
      uVar7 = uVar7 - 0x20;
    }
    if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
      FUN_003351b4();
    }
  }
  return;
}
