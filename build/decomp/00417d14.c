// OoT3D decomp @ 00417d14  name=FUN_00417d14  size=400

undefined4 FUN_00417d14(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  pcVar2 = DAT_0041b694;
  puVar1 = DAT_00417d28;
  uVar5 = *(undefined4 *)(DAT_00417d24 + 8);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  if (*DAT_0041b694 != '\0') {
    return DAT_0041b698;
  }
  iVar3 = FUN_0030de88();
  if (DAT_0041b69c != iVar3 * 0x400000 && iVar3 < 0) {
    FUN_0030e3ac(iVar3,&DAT_0041b6a0,0,&DAT_0041b6a0);
    FUN_002fb928(0);
  }
  uVar4 = FUN_0030de24(uVar5);
  iVar3 = FUN_0030dde8(DAT_0041b6a4,uVar5,uVar4,0);
  if (iVar3 < 0) {
    FUN_0030e3ac(iVar3,&DAT_0041b6a0,0,&DAT_0041b6a0);
    FUN_002fb928(0);
  }
  iVar3 = FUN_0042321c(&local_18,&local_1c,&local_20,&local_24,&local_28,&local_2c);
  if (iVar3 < 0) {
    FUN_0030e3ac(iVar3,&DAT_0041b6a0,0,&DAT_0041b6a0);
    FUN_002fb928(0);
  }
  FUN_0030dce0(puVar1 + 0xb,local_18,0x2b0,1);
  iVar3 = puVar1[0xd];
  puVar1[1] = iVar3;
  puVar1[3] = iVar3 + 0xa8;
  puVar1[5] = iVar3 + 0x108;
  puVar1[8] = iVar3 + 0x158;
  puVar1[10] = iVar3 + 0x238;
  *puVar1 = local_1c;
  puVar1[2] = local_20;
  puVar1[4] = local_24;
  puVar1[7] = local_28;
  puVar1[9] = local_2c;
  *pcVar2 = '\x01';
  return 0;
}
