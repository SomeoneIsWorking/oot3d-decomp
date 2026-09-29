// OoT3D decomp @ 00407884  name=FUN_00407884  size=524

void FUN_00407884(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;

  iVar6 = 0;
  do {
    if (iVar6 < 0x10) {
      iVar7 = *(int *)(param_1 + iVar6 * 4 + 0x84);
    }
    else {
      iVar7 = 0;
    }
    if (iVar7 != 0) {
      FUN_00308eb0(iVar7,0x7f);
      FUN_00308e7c(iVar7);
    }
    fVar3 = DAT_00407a94;
    fVar2 = DAT_00407a90;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  while( true ) {
    iVar7 = *(int *)(param_1 + 100);
    if (iVar7 == 0) {
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x6e) * (uint)*(ushort *)(param_1 + 0x70),
                                (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar9 * *(float *)(param_1 + 0x5c) * fVar2 * *(float *)(param_1 + 0x68)) <
          0x3f800000) {
        *(undefined4 *)(param_1 + 0x68) = DAT_00407a98;
        return;
      }
    }
    if (0x2ff < iVar6) break;
    if (iVar7 == 0) {
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x6e) * (uint)*(ushort *)(param_1 + 0x70),
                                (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x68) =
           *(float *)(param_1 + 0x68) - fVar3 / (fVar9 * fVar2 * *(float *)(param_1 + 0x5c));
    }
    else {
      *(int *)(param_1 + 100) = iVar7 + -1;
    }
    bVar1 = false;
    iVar7 = 0;
    do {
      if (iVar7 < 0x10) {
        iVar8 = *(int *)(param_1 + iVar7 * 4 + 0x84);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 != 0) {
        FUN_00309100(iVar8);
        iVar4 = FUN_00309000(iVar8,0);
        if (iVar4 < 0) {
          if (iVar7 < 0x10) {
            iVar4 = *(int *)(param_1 + iVar7 * 4 + 0x84);
          }
          else {
            iVar4 = 0;
          }
          if (iVar4 != 0) {
            FUN_00308f94();
            iVar4 = param_1 + iVar7 * 4;
            (**(code **)(**(int **)(param_1 + 0x78) + 0xc))
                      (*(int **)(param_1 + 0x78),*(undefined4 *)(iVar4 + 0x84));
            *(undefined4 *)(iVar4 + 0x84) = 0;
          }
        }
        if (*(char *)(iVar8 + 5) != '\0') {
          bVar1 = true;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x10);
    if (!bVar1) {
      if (*(char *)(param_1 + 9) != '\0') {
        uVar5 = FUN_0030c7cc();
        FUN_00309bdc(uVar5,param_1 + 0x48);
        *(undefined1 *)(param_1 + 9) = 0;
      }
      iVar6 = 0;
      do {
        if (iVar6 < 0x10) {
          iVar7 = *(int *)(param_1 + iVar6 * 4 + 0x84);
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          FUN_00308f94();
          iVar7 = param_1 + iVar6 * 4;
          (**(code **)(**(int **)(param_1 + 0x78) + 0xc))
                    (*(int **)(param_1 + 0x78),*(undefined4 *)(iVar7 + 0x84));
          *(undefined4 *)(iVar7 + 0x84) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      *(undefined1 *)(param_1 + 0xb) = 1;
      return;
    }
    iVar6 = iVar6 + 1;
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  }
  return;
}
