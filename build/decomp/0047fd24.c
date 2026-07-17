// OoT3D decomp @ 0047fd24  name=FUN_0047fd24  size=172

void FUN_0047fd24(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  int iVar5;
  
  iVar5 = iRam0047fdd0;
  iVar2 = *param_1;
  param_1[1] = *(int *)(iVar2 + 0x24);
  param_1[2] = *(int *)(iVar2 + 0x28);
  param_1[3] = *(int *)(iVar2 + 0x2c);
  param_1[4] = iVar5;
  iVar5 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = iVar5;
  iVar5 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = iVar5;
  piVar1 = piRam0047fdd4;
  if (*(char *)(iVar2 + 0x41) == '\0') {
    param_1[9] = *piRam0047fdd4;
    func_0x002cdbfc(param_1);
    iVar5 = 0;
    do {
      uVar3 = func_0x002cdb60(param_1[iVar5 + 0x9a]);
      iVar2 = func_0x002cdb0c(param_1[iVar5 + 0x1a]);
      iVar4 = iVar5 + 1;
      param_1[iVar5 + 0x11a] = uVar3 | iVar2 << 0xd;
      iVar5 = iVar4;
    } while (iVar4 < 0x80);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

