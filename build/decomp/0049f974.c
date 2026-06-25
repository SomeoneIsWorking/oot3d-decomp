// OoT3D decomp @ 0049f974  name=FUN_0049f974  size=196

void FUN_0049f974(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined auStack_ac [12];
  undefined auStack_a0 [48];
  undefined auStack_70 [48];
  undefined auStack_40 [48];
  
  iVar1 = FUN_002c0920(param_2);
  if (iVar1 != 0) {
    param_1 = param_1 + param_2 * 0x6c;
    FUN_00358188(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                 *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x7c),
                 *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),auStack_40,
                 (int)*(short *)(param_1 + 0x74),(int)*(short *)(param_1 + 0x76),
                 (int)*(short *)(param_1 + 0x78));
    iVar1 = FUN_004a31a4(auStack_40,auStack_70);
    if (iVar1 != 2) {
      FUN_00358188(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x9c),
                   *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),auStack_a0,
                   (int)*(short *)(param_1 + 0x94),(int)*(short *)(param_1 + 0x96),
                   (int)*(short *)(param_1 + 0x98));
      FUN_00373598(auStack_70,param_3 + 0x28,auStack_ac);
      FUN_00373598(auStack_a0,auStack_ac,param_3 + 0x28);
    }
  }
  return;
}

