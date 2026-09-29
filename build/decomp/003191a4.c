// OoT3D decomp @ 003191a4  name=FUN_003191a4  size=332

undefined4
FUN_003191a4(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4,uint *param_5,
            int param_6,undefined4 param_7,float *param_8)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;

  uVar2 = (uint)*(byte *)((int)param_5 + 0x11);
  bVar3 = (*(byte *)((int)param_5 + 0x11) & 4) != 0;
  if (bVar3) {
    uVar2 = *param_2;
  }
  bVar4 = uVar2 != 0;
  if (bVar3 && bVar4) {
    uVar2 = *param_5;
  }
  if ((bVar3 && bVar4) && uVar2 != 0) {
    *(byte *)(param_2 + 4) = (byte)param_2[4] | 4;
    *(byte *)((int)param_5 + 0x11) = *(byte *)((int)param_5 + 0x11) | 0x80;
  }
  if ((*(byte *)(param_6 + 0x16) & 8) == 0) {
    *(byte *)(param_2 + 4) = (byte)param_2[4] | 2;
    param_2[1] = *param_5;
    *(byte *)(param_3 + 0x15) = *(byte *)(param_3 + 0x15) | 2;
    *(int *)(param_3 + 0x20) = param_6;
    *(uint **)(param_3 + 0x18) = param_5;
    if (*param_2 != 0) {
      *(undefined1 *)(*param_2 + 0xba) = *(undefined1 *)(param_6 + 0xc);
    }
  }
  *(byte *)((int)param_5 + 0x11) = *(byte *)((int)param_5 + 0x11) | 2;
  param_5[2] = *param_2;
  *(byte *)(param_6 + 0x16) = *(byte *)(param_6 + 0x16) | 2;
  *(uint **)(param_6 + 0x1c) = param_2;
  *(int *)(param_6 + 0x24) = param_3;
  if (*param_5 != 0) {
    *(undefined1 *)(*param_5 + 0xbb) = *(undefined1 *)(param_3 + 4);
  }
  *(short *)(param_6 + 0xe) = (short)(int)*param_8;
  *(short *)(param_6 + 0x10) = (short)(int)param_8[1];
  *(short *)(param_6 + 0x12) = (short)(int)param_8[2];
  if (((*(byte *)(param_3 + 0x15) & 0x20) == 0) &&
     (cVar1 = (char)param_5[5], (cVar1 != '\t' && cVar1 != '\v') && cVar1 != '\f')) {
    *(byte *)(param_6 + 0x16) = *(byte *)(param_6 + 0x16) | 0x80;
  }
  else {
    FUN_0031a604(param_1,param_2,param_3,param_5,param_6,param_8);
    *(byte *)(param_3 + 0x15) = *(byte *)(param_3 + 0x15) | 0x40;
  }
  return 1;
}
