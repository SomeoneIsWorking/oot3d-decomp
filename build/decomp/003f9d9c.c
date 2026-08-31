// OoT3D decomp @ 003f9d9c  name=FUN_003f9d9c  size=404

void FUN_003f9d9c(int param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;

  fVar3 = fRam003f9f38;
  fVar2 = fRam003f9f34;
  fVar1 = fRam003f9f30;
  iVar5 = 0;
  do {
    if (*(int *)(*param_2 + 0x120) <= iVar5) {
      return;
    }
    uVar6 = (uint)*(ushort *)(param_2[2] + *(short *)(*param_2 + iVar5 * 2 + 0x124) * 0x28 + 0x24);
    iVar4 = func_0x0040cc5c(*(undefined4 *)(param_1 + 0x10),uVar6);
    if (iVar4 == 0) {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + param_3 * 0x124 + uVar6 + 10) == '\0') {
        if (uVar6 < 6) {
          fStack_50 = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(*param_2 + uVar6 * 4 + 0xb4),
                                        (byte)(in_fpscr >> 0x15) & 3);
          fStack_50 = fStack_50 * fVar3;
          fStack_4c = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(*param_2 + uVar6 * 4 + 0xb5),
                                        (byte)(in_fpscr >> 0x15) & 3);
          fStack_4c = fStack_4c * fVar3;
          fStack_48 = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(*param_2 + uVar6 * 4 + 0xb6),
                                        (byte)(in_fpscr >> 0x15) & 3);
          fStack_48 = fStack_48 * fVar3;
          fStack_44 = (float)VectorUnsignedToFloat
                                       ((uint)*(byte *)(*param_2 + uVar6 * 4 + 0xb7),
                                        (byte)(in_fpscr >> 0x15) & 3);
          fStack_44 = fStack_44 * fVar3;
        }
        else {
          fStack_48 = fVar1;
          fStack_4c = fVar1;
          fStack_50 = fVar1;
          fStack_44 = fVar2;
        }
      }
      else {
        func_0x00331094(*(int *)(param_1 + 0xc),param_3,uVar6,&fStack_50);
      }
    }
    else {
      func_0x00357a28(*(undefined4 *)(param_1 + 0x10),uVar6,&fStack_50);
    }
    func_0x0031448c(param_1 + 0x24,iVar5,&fStack_50);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  return;
}
