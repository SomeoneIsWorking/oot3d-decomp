// OoT3D decomp @ 002d349c  name=FUN_002d349c  size=532

int FUN_002d349c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  char local_34 [4];
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;

  uStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  FUN_0030db4c();
  FUN_0030dab0();
  iVar2 = FUN_002ce7a4(0xffffffff,local_34,auStack_38,&local_3c,auStack_40);
  if (iVar2 < 0) {
    FUN_0030e3ac(iVar2,&DAT_002d36b0,0,&DAT_002d36b0);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  puVar1 = DAT_002d36b4;
  software_interrupt(0x14);
  uVar5 = *DAT_002d36b4 >> 0x1b;
  if ((*DAT_002d36b4 & 0x80000000) != 0) {
    uVar5 = uVar5 - 0x20;
  }
  if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
    FUN_003351b4();
  }
  uVar5 = DAT_002d36bc;
  iVar2 = DAT_002d36b8;
  if ((*(uint *)(DAT_002d36b8 + 0xa0) & 7) == 0) {
    while( true ) {
      FUN_0030db4c();
      FUN_0030dab0();
      iVar3 = FUN_002ce75c(local_3c,local_34);
      if (iVar3 < 0) {
        FUN_0030e3ac(iVar3,&DAT_002d36b0,0,&DAT_002d36b0);
        FUN_002fb928(0);
      }
      FUN_0030da40();
      uVar4 = *puVar1;
      software_interrupt(0x14);
      uVar6 = uVar4 >> 0x1b;
      if ((uVar4 & 0x80000000) != 0) {
        uVar6 = uVar6 - 0x20;
      }
      if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
        FUN_003351b4();
      }
      if (local_34[0] != '\0') break;
      FUN_0030e604((int)((ulonglong)uVar5 * 10),(int)((ulonglong)uVar5 * 10 >> 0x20));
    }
    *(undefined1 *)(iVar2 + 0xf) = 1;
    FUN_002ce734();
    FUN_002ce680(local_3c);
  }
  iVar3 = FUN_002e1ef0();
  if (iVar3 != 0) {
    FUN_002ce818();
    *(undefined1 *)(iVar2 + 5) = 1;
  }
  FUN_002dc008(0);
  FUN_002ce618();
  FUN_0030db4c();
  FUN_0030dab0();
  iVar3 = FUN_00485c48(param_1,local_2c,local_28);
  if (iVar3 < 0) {
    FUN_0030e3ac(iVar3,&DAT_002d36b0,0,&DAT_002d36b0);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  uVar6 = *puVar1;
  software_interrupt(0x14);
  uVar5 = uVar6 >> 0x1b;
  if ((uVar6 & 0x80000000) != 0) {
    uVar5 = uVar5 - 0x20;
  }
  if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
    FUN_003351b4();
  }
  *(undefined1 *)(iVar2 + 3) = 0;
  return iVar3;
}
