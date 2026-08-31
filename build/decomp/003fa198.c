// OoT3D decomp @ 003fa198  name=FUN_003fa198  size=432

void FUN_003fa198(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  short *psStack_30;
  int iStack_2c;
  ushort *puStack_28;

  uVar1 = uRam003fa348;
  iVar6 = 0;
  if (0 < *(int *)(*param_2 + 8)) {
    do {
      if (iVar6 < *(int *)(*param_2 + 0xc)) {
        puStack_28 = (ushort *)(iVar6 * 0x18 + 0x58 + *param_2);
      }
      else {
        puStack_28 = (ushort *)0x0;
      }
      iVar3 = param_1 + iVar6 * 4;
      *(uint *)(iVar3 + 0x458) = (uint)*puStack_28;
      *(uint *)(iVar3 + 0x468) = (uint)(byte)puStack_28[1];
      uVar2 = func_0x0040f710(&puStack_28);
      iVar3 = param_1 + iVar6 * 2;
      *(undefined2 *)(iVar3 + 0x450) = uVar2;
      if ((iVar6 == 0) && (*(char *)(*(int *)(param_1 + 0x10) + 0x1b5) != '\0')) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x1a8);
        *(undefined4 *)(param_1 + 0x468) = 4;
        *(short *)(param_1 + 0x450) = (short)uVar1;
        func_0x00408f48(param_1 + 0x24,uVar1,iVar3);
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                          );
        func_0x00409054((*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x28)) /
                        (*(float *)(iVar3 + 0x24) - *(float *)(iVar3 + 0x20)),
                        *(float *)(iVar3 + 0x2c) / fVar7,param_1 + 0x24,(int)*(char *)(iVar3 + 0x71)
                       );
      }
      else {
        if (iVar6 < *(int *)(*param_2 + 8)) {
          psStack_30 = (short *)(*param_2 + iVar6 * 0x18 + 0x10);
          iStack_2c = param_2[1];
        }
        else {
          iStack_2c = param_2[1];
          psStack_30 = (short *)0x0;
        }
        if (-1 < *psStack_30) {
          uVar4 = func_0x00314870(param_1 + 0x18);
          iVar5 = *(int *)(param_1 + 0x8c);
          *(int *)(param_1 + 0x8c) = iVar5 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x88) + iVar5 * 4) = uVar4;
          func_0x00408d1c(param_1 + 0x24,iVar6,*(undefined2 *)(iVar3 + 0x450),&psStack_30,
                          *(int *)(*(int *)(param_1 + 4) + 0x14) + *psStack_30 * 0xc);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*param_2 + 8));
  }
  return;
}
