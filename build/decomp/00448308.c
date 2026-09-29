// OoT3D decomp @ 00448308  name=FUN_00448308  size=256

undefined4 FUN_00448308(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;

  puVar1 = DAT_00448408;
  if (((*DAT_00448408 & 1) == 0) &&
     (uVar5 = FUN_003679b4(DAT_00448408), param_2 = (undefined4)((ulonglong)uVar5 >> 0x20),
     (int)uVar5 != 0)) {
    FUN_0036788c(DAT_0044840c);
    param_2 = DAT_00448414;
  }
  iVar2 = DAT_00448418;
  uVar5 = FUN_002f4350(DAT_00448418,param_2);
  if ((int)uVar5 != 0) {
    return 1;
  }
  uVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (((*puVar1 & 1) == 0) &&
     (uVar5 = FUN_003679b4(DAT_00448408), uVar4 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0))
  {
    FUN_0036788c(DAT_0044840c);
    uVar4 = DAT_00448414;
  }
  if (*(char *)(iVar2 + 0xc) == '\0') {
    if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00448408,uVar4), iVar3 != 0)) {
      FUN_0036788c(DAT_0044840c);
    }
    FUN_002f41f8(iVar2,0);
  }
  return 3;
}
