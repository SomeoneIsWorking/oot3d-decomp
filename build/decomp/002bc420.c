// OoT3D decomp @ 002bc420  name=FUN_002bc420  size=460

int FUN_002bc420(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  uint uVar4;
  char *pcVar5;
  uint in_fpscr;
  float fVar6;
  
  iVar1 = DAT_002bc5ec;
  if (*(int *)(DAT_002bc5ec + 0x28) == 6 || *(int *)(DAT_002bc5ec + 0x28) == 9) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(short *)(param_2 + 0x2282);
  }
  FUN_003705a0(DAT_002bc5f4,DAT_002bc5f0,param_2 + 0x221c);
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xfff3ffff;
  if (399 < sVar3) {
    uVar4 = (uint)(799 < *(short *)(param_2 + 0x2282));
    pcVar5 = (char *)(DAT_002bc5f8 + uVar4 * 8);
    iVar1 = FUN_0035daac(param_1,(int)*pcVar5);
    if (iVar1 == 0) {
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002bc5fc + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if (-1 < *(char *)(DAT_002bc608 + param_2)) {
        *(char *)(param_2 + 0x2488) = (char)(int)(DAT_002bc600 / fVar6 + DAT_002bc604);
        *(undefined *)(param_2 + 0x227b) = 0;
      }
      uVar2 = FUN_0036c5bc(param_1,0);
      uVar2 = FUN_0036f848(uVar2,3);
      FUN_0036f7c0(uVar2,DAT_002bc60c);
      FUN_0036f6b0(uVar2,2,0,0,0);
      FUN_0036f628(uVar2,0x1e);
      FUN_0036f59c(param_2,DAT_002bc610);
      if (*(char *)(param_2 + 2) == '\x02') {
        FUN_0036f59c(param_2,*(int *)(pcVar5 + 4) +
                             (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_2 + 0x28);
      }
      return uVar4 + 1;
    }
    return -1;
  }
  if ((200 < sVar3) && (*(int *)(iVar1 + 0x28) == 6)) {
    if (*(char *)(param_2 + 2) == '\x02') {
      FUN_0036f59c(param_2,DAT_002bc614 + (uint)*(ushort *)(*(int *)(param_2 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_2 + 0x28);
    }
  }
  FUN_0034bd3c(param_2);
  return 0;
}

