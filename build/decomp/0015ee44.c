// OoT3D decomp @ 0015ee44  name=FUN_0015ee44  size=124

void FUN_0015ee44(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*DAT_0015eec0 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0015eec0), puVar3 = DAT_0015eecc, uVar2 = DAT_0015eec8,
     uVar1 = DAT_0015eec4, iVar4 != 0)) {
    *DAT_0015eecc = DAT_0015eec4;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (0xb < *(short *)(param_1 + 0x218)) {
    FUN_00376864(param_1);
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 600;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 1000;
  return;
}
