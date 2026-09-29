// OoT3D decomp @ 0048c138  name=FUN_0048c138  size=96

bool FUN_0048c138(int param_1,uint *param_2)

{
  ushort *puVar1;

  puVar1 = (ushort *)FUN_00495780(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (ushort *)0x0) {
    *param_2 = (uint)*puVar1;
    param_2[1] = (uint)puVar1[1];
    param_2[2] = (uint)puVar1[2];
    param_2[3] = (uint)puVar1[3];
    param_2[4] = (uint)puVar1[4];
    param_2[5] = (uint)puVar1[5];
    param_2[6] = (uint)puVar1[6];
  }
  return puVar1 != (ushort *)0x0;
}
