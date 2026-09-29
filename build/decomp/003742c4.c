// OoT3D decomp @ 003742c4  name=FUN_003742c4  size=332

void FUN_003742c4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;

  *(undefined1 *)(param_1 + 0x122) = 0;
  fVar3 = DAT_0037441c;
  fVar2 = DAT_00374414;
  uVar1 = DAT_00374410;
  uVar7 = *(int *)(param_2 + 0x18) - 1;
  if (-1 < (int)uVar7) {
    iVar5 = *DAT_00374418;
    do {
      uVar6 = *(int *)(param_2 + 0x1c) + uVar7 * 0x50;
      puVar8 = *(uint **)(uVar6 + 0x24);
      if (puVar8 == (uint *)0x0) {
        bVar4 = 0;
      }
      else {
        if (param_3 != 0) {
          uVar6 = *puVar8;
        }
        if (param_3 == 0 || (uVar6 & uVar1) == 0) {
          uVar6 = *puVar8;
          if ((uVar6 & 0x800) == 0) {
            if ((uVar6 & 0x1000) == 0) {
              if ((uVar6 & 0x4000) == 0) {
                if ((uVar6 & 0x8000) == 0) {
                  if ((uVar6 & 0x10000) == 0) {
                    if ((uVar6 & 0x2000) == 0) {
                      bVar4 = 0;
                      if ((uVar6 & 0x80000) != 0) {
                        if (param_3 != 0) {
                          fVar9 = (float)VectorUnsignedToFloat
                                                   ((uint)*(byte *)((int)puVar8 + 5),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                          fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                                              (byte)(in_fpscr >> 0x15) & 3);
                          *(short *)(param_1 + 0x118) =
                               (short)(int)((fVar9 * fVar2) / fVar10 + fVar3);
                        }
                        bVar4 = 0x40;
                      }
                    }
                    else {
                      bVar4 = 0x20;
                    }
                  }
                  else {
                    bVar4 = 0x10;
                  }
                }
                else {
                  bVar4 = 8;
                }
              }
              else {
                bVar4 = 4;
              }
            }
            else {
              bVar4 = 2;
            }
          }
          else {
            bVar4 = 1;
          }
        }
        else {
          fVar9 = (float)VectorUnsignedToFloat
                                   ((uint)*(byte *)((int)puVar8 + 5),(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x118) = (short)(int)((fVar9 * fVar2) / fVar10 + fVar3);
          bVar4 = 0;
        }
      }
      uVar7 = uVar7 - 1;
      *(byte *)(param_1 + 0x122) = bVar4 | *(byte *)(param_1 + 0x122);
    } while (uVar7 < 0x80000000);
  }
  return;
}
