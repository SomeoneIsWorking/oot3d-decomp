// OoT3D decomp @ 0040d1a8  name=FUN_0040d1a8  size=300

uint * FUN_0040d1a8(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;

  bVar1 = param_1[0xb];
  bVar2 = param_1[10];
  bVar3 = param_1[0xc];
  param_2[1] = (uint)*param_1 * 0x10 + 0x140 | 0x80bf0000;
  *param_2 = (uint)bVar1 << 10 | (uint)bVar2 << 0x14 | (uint)bVar3;
  param_2[2] = (uint)param_1[0xf] | (uint)param_1[0xe] << 10 | (uint)param_1[0xd] << 0x14;
  param_2[3] = (uint)param_1[5] << 10 | (uint)param_1[4] << 0x14 | (uint)param_1[6];
  param_2[4] = (uint)param_1[8] << 10 | (uint)param_1[7] << 0x14 | (uint)param_1[9];
  param_2[5] = *(uint *)(param_1 + 0x10);
  param_2[6] = *(uint *)(param_1 + 0x14);
  param_2[7] = *(uint *)(param_1 + 0x24);
  param_2[8] = *(uint *)(param_1 + 0x28);
  param_2[9] = 0;
  param_2[10] = (uint)(param_1[2] != 0) << 2 | (uint)(param_1[3] != 0) << 3 |
                (uint)param_1[0x18] | (uint)(param_1[1] != 0) << 1;
  param_2[0xb] = *(uint *)(param_1 + 0x1c);
  param_2[0xc] = *(uint *)(param_1 + 0x20);
  param_2[0xd] = 0;
  return param_2 + 0xe;
}
