// OoT3D decomp @ 00459f6c  name=FUN_00459f6c  size=196

void FUN_00459f6c(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;

  puVar1 = DAT_0045a030;
  if (((*DAT_0045a030 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_0045a030), param_2 = (undefined4)((ulonglong)uVar3 >> 0x20),
     (int)uVar3 != 0)) {
    FUN_0036788c(DAT_0045a034);
    param_2 = DAT_0045a03c;
  }
  FUN_0031025c(DAT_0045a034,param_2);
  FUN_002d8200(param_1 + 0x10c);
  FUN_002d8200(param_1 + 0x23c);
  FUN_003016e0(0);
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0045a030), iVar2 != 0)) {
    FUN_0036788c(DAT_0045a034);
  }
  iVar2 = DAT_0045a040;
  *(undefined4 *)(DAT_0045a040 + 0x440) = 0;
  *(undefined4 *)(iVar2 + 0x444) = 0;
  return;
}
