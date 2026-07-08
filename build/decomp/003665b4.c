// OoT3D decomp @ 003665b4  name=FUN_003665b4  size=72

/* WARNING: Removing unreachable block (ram,0x00366628) */
/* WARNING: Removing unreachable block (ram,0x00366638) */
/* WARNING: Removing unreachable block (ram,0x0036663c) */
/* WARNING: Removing unreachable block (ram,0x00366640) */

void FUN_003665b4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  
  if (*(char *)(param_1 + 0xa6c) == '\x13') {
    FUN_0033c7a4(5);
  }
  else {
    FUN_0033c7a4();
  }
  FUN_003665fc(0xe,1);
  iVar2 = FUN_0032e658();
  if (iVar2 != 0) {
    bVar1 = 0xf;
    uVar3 = extraout_r3;
    do {
      FUN_002d0190(bVar1,1,1,uVar3,unaff_r4);
      bVar1 = bVar1 + 1;
      uVar3 = extraout_r3_00;
    } while (bVar1 < 0x10);
  }
  return;
}

