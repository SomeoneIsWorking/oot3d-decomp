// OoT3D decomp @ 00481370  name=FUN_00481370  size=316

void FUN_00481370(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_340 [524];
  undefined1 auStack_134 [256];
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;

  auStack_34[0] = *DAT_004814ac;
  auStack_34[1] = DAT_004814ac[1];
  auStack_34[2] = DAT_004814ac[2];
  auStack_34[3] = DAT_004814ac[3];
  uStack_24 = DAT_004814ac[4];
  uStack_20 = DAT_004814ac[5];
  uStack_1c = DAT_004814ac[6];
  uStack_18 = DAT_004814ac[7];
  uStack_14 = DAT_004814ac[8];
  uStack_10 = DAT_004814ac[9];
  if (((*DAT_004814b0 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_004814b0), iVar1 != 0)) {
    FUN_0036788c(DAT_004814b4);
  }
  if (*(char *)(DAT_004814c4 + 0xe) == '\x01') {
    FUN_002fc3a8(auStack_134,DAT_004814c8,auStack_34[*(int *)(DAT_004814c0 + 0xf3c)]);
  }
  else {
    FUN_002fc3a8(auStack_134,DAT_004814cc,auStack_34[*(int *)(DAT_004814c0 + 0xf3c)]);
  }
  FUN_00324f44(auStack_340,auStack_134,DAT_004814d0);
  uVar2 = FUN_00301300(auStack_340,0,0);
  FUN_0031b9c0(uVar2,1);
  iVar1 = (**(code **)(*(int *)*DAT_004814d4 + 8))((int *)*DAT_004814d4,0x54);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_00303ea8(uVar2);
    uVar3 = FUN_003012b4(iVar1,uVar3,0);
  }
  *DAT_004814d8 = uVar3;
  FUN_00303ea8(uVar2);
  FUN_0034fc6c();
  FUN_0031b99c(uVar2);
  return;
}
