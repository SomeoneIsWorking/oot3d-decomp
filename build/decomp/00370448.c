// OoT3D decomp @ 00370448  name=FUN_00370448  size=312

void FUN_00370448(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  if (((*(uint *)(DAT_00370580 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00370584), puVar2 = DAT_0037058c, uVar1 = DAT_00370588, iVar4 != 0))
  {
    *DAT_0037058c = DAT_00370588;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  local_24 = *(undefined4 *)(param_1 + 0x28);
  local_1c = *(undefined4 *)(param_1 + 0x30);
  local_20 = *(undefined4 *)(param_1 + 0x84);
  local_2c = DAT_00370590;
  local_30 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + 0x6000));
  fVar3 = DAT_00370594;
  local_30 = local_30 * DAT_00370594;
  local_28 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + 0x6000));
  uVar1 = DAT_00370598;
  local_28 = local_28 * fVar3;
  FUN_00363ec4(param_2,&local_24,&local_30,DAT_0037058c,DAT_00370598,100);
  local_30 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + -0x6000));
  local_30 = local_30 * fVar3;
  local_28 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + -0x6000));
  local_28 = local_28 * fVar3;
  FUN_00363ec4(param_2,&local_24,&local_30,DAT_0037058c,uVar1,100);
  FUN_00373264(param_1,DAT_0037059c);
  return;
}
