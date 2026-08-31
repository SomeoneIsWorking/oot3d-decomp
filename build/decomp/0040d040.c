// OoT3D decomp @ 0040d040  name=FUN_0040d040  size=272

uint * FUN_0040d040(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar2 = 1 - (uint)*(byte *)(param_1 + 0x195);
  if (1 < *(byte *)(param_1 + 0x195)) {
    iVar2 = 0;
  }
  iVar3 = 1 - (uint)*(byte *)(param_1 + 0x199);
  if (1 < *(byte *)(param_1 + 0x199)) {
    iVar3 = 0;
  }
  iVar4 = 1 - (uint)*(byte *)(param_1 + 0x19d);
  if (1 < *(byte *)(param_1 + 0x19d)) {
    iVar4 = 0;
  }
  iVar5 = 1 - (uint)*(byte *)(param_1 + 0x1a1);
  if (1 < *(byte *)(param_1 + 0x1a1)) {
    iVar5 = 0;
  }
  iVar6 = 1 - (uint)*(byte *)(param_1 + 0x1a5);
  if (1 < *(byte *)(param_1 + 0x1a5)) {
    iVar6 = 0;
  }
  iVar7 = 1 - (uint)*(byte *)(param_1 + 0x1a9);
  if (1 < *(byte *)(param_1 + 0x1a9)) {
    iVar7 = 0;
  }
  iVar1 = 1 - (uint)*(byte *)(param_1 + 0x1ad);
  if (1 < *(byte *)(param_1 + 0x1ad)) {
    iVar1 = 0;
  }
  *param_2 = iVar2 << 1 | iVar3 << 5 | iVar4 << 9 | iVar5 << 0xd | iVar6 << 0x11 | iVar7 << 0x15 |
             iVar1 << 0x19;
  param_2[1] = uRam0040d150;
  param_2[2] = (uint)*(byte *)(param_1 + 0x194) | (uint)*(byte *)(param_1 + 0x198) << 4 |
               (uint)*(byte *)(param_1 + 0x19c) << 8 | (uint)*(byte *)(param_1 + 0x1a0) << 0xc |
               (uint)*(byte *)(param_1 + 0x1a4) << 0x10 | (uint)*(byte *)(param_1 + 0x1a8) << 0x14 |
               (uint)*(byte *)(param_1 + 0x1ac) << 0x18;
  param_2[3] = uRam0040d154;
  param_2[4] = (uint)*(byte *)(param_1 + 0x196) | (uint)*(byte *)(param_1 + 0x19a) << 4 |
               (uint)*(byte *)(param_1 + 0x19e) << 8 | (uint)*(byte *)(param_1 + 0x1a2) << 0xc |
               (uint)*(byte *)(param_1 + 0x1a6) << 0x10 | (uint)*(byte *)(param_1 + 0x1aa) << 0x14 |
               (uint)*(byte *)(param_1 + 0x1ae) << 0x18;
  param_2[5] = uRam0040d158;
  return param_2 + 6;
}
