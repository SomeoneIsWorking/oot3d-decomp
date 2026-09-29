// OoT3D decomp @ 00267dc0  name=FUN_00267dc0  size=916

void FUN_00267dc0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;

  iVar8 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(iVar8 + 0x1728) == 0) {
    if (*(int *)(iVar8 + 0x16f8) != 0) goto LAB_00267f90;
    if (*(ushort *)(DAT_00268154 + 0x4c) - 900 < 0xe11) {
      sVar3 = FUN_0032d474(param_2);
      *(short *)(iVar8 + 0x1728) = sVar3;
      if (sVar3 == 0x15f) {
        *(undefined2 *)(iVar8 + 0x1728) = 0;
      }
      else if (sVar3 != 0) goto LAB_00267f8c;
    }
    if (DAT_00268158 < *(uint *)(param_2 + 0x5bf8)) {
      if ((*(int *)(param_2 + 0x21a0) == 0) && (iVar5 = FUN_0037577c(param_2), iVar5 == 0)) {
        sVar3 = *(short *)(param_2 + 0x104);
        if (sVar3 < 0xe) {
LAB_00267e90:
          if (sVar3 == 0x4f) goto LAB_00267f5c;
        }
        else if (sVar3 != 0x10) {
          if (sVar3 < 0x1b) goto LAB_00267f5c;
          goto LAB_00267e90;
        }
        iVar6 = FUN_003695f8();
        iVar5 = DAT_00268164;
        if ((iVar6 == 0) && (*(char *)(iVar8 + 0x1749) != '\x01')) {
          if ((*(char *)(DAT_00268154 + 0xe) == '\0') &&
             (DAT_0026815c < *(uint *)(param_2 + 0x5bfc))) {
            if (*(short *)(param_1 + 0x99c) == 0) {
              *(undefined2 *)(param_1 + 0x99c) = 300;
            }
            sVar3 = *(short *)(param_1 + 0x99c) + -1;
            *(short *)(param_1 + 0x99c) = sVar3;
            if (sVar3 == 0) {
              *(undefined4 *)(param_2 + 0x5bfc) = 0;
              goto LAB_00267f90;
            }
            uVar4 = (undefined2)DAT_00268160;
          }
          else {
            if (*(uint *)(DAT_00268164 + 0x5b4) <= DAT_00268168) goto LAB_00267f8c;
            if (*(short *)(param_1 + 0x99c) == 0) {
              *(undefined2 *)(param_1 + 0x99c) = 300;
            }
            sVar3 = *(short *)(param_1 + 0x99c) + -1;
            *(short *)(param_1 + 0x99c) = sVar3;
            if (sVar3 == 0) {
              *(undefined4 *)(iVar5 + 0x5b4) = DAT_0026816c;
              goto LAB_00267f90;
            }
            uVar4 = (undefined2)DAT_00268170;
          }
          *(undefined2 *)(iVar8 + 0x1728) = uVar4;
          goto LAB_00267f90;
        }
      }
LAB_00267f5c:
      iVar5 = FUN_0037577c(param_2);
      if (iVar5 != 0) goto LAB_00267f90;
    }
  }
  else if (*(short *)(iVar8 + 0x1728) < 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    goto LAB_00267f90;
  }
LAB_00267f8c:
  *(undefined2 *)(param_1 + 0x99c) = 0;
LAB_00267f90:
  iVar5 = FUN_0036bc98(param_1,param_2);
  if (iVar5 == 0) {
    (**(code **)(param_1 + 0x9cc))(param_1,param_2);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x9bc);
    iVar5 = FUN_0037577c(param_2);
    if (iVar5 == 0) {
      if (*(ushort *)(DAT_00268154 + 0x4c) < DAT_00268188) {
        *(ushort *)(DAT_00268154 + 0x4c) = *(ushort *)(DAT_00268154 + 0x4c) + 1;
      }
      else if ((*(ushort *)(param_1 + 0x9c4) & 0x80) == 0) {
        *(undefined2 *)(DAT_00268154 + 0x4c) = 0;
      }
    }
  }
  else {
    FUN_00371af0(DAT_00268178,DAT_00268174,10);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    uVar7 = FUN_0032d474(param_2);
    uVar2 = DAT_00268180;
    iVar5 = DAT_00268154;
    if (uVar7 == *(ushort *)(DAT_0026817c + param_1)) {
      *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) | 0x80;
      *(short *)(iVar5 + 0x4c) = (short)uVar2;
    }
    uVar2 = DAT_00268184;
    *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) | 0x30;
    *(undefined4 *)(param_1 + 0x13c) = uVar2;
    FUN_003616fc(param_1,3);
    iVar5 = *(int *)(param_1 + 0x98c);
    if (iVar5 != 0) {
      *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 0x100;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  if ((*(int *)(param_1 + 0x98c) != 0) &&
     (((*(uint *)(param_1 + 4) & 0x10000) == 0 || (*DAT_0026818c != 0)))) {
    *(undefined4 *)(param_1 + 0x98c) = 0;
  }
  fVar9 = DAT_00268190;
  *(short *)(param_1 + 0x9be) = *(short *)(param_1 + 0x9be) + 1;
  if (fVar9 < *(float *)(param_1 + 0x998)) {
    FUN_003705a0(fVar9,DAT_00268194,param_1 + 0x998);
    fVar9 = *(float *)(param_1 + 0x998);
    FUN_0036bee0(fVar9 * fVar9 * fVar9,*(float *)(iVar8 + 0xf4) + DAT_00268198,DAT_002681a0,
                 DAT_0026819c,param_2);
  }
  cVar1 = *(char *)(param_1 + 0x9c7);
  if (((cVar1 == '\0') || (*(char *)(param_1 + 0x9c7) = cVar1 + -1, cVar1 == '\x01')) &&
     (iVar8 = FUN_0037571c(param_2), iVar8 != 0)) {
    *(undefined1 *)(param_1 + 0x9c7) = 1;
  }
  return;
}
