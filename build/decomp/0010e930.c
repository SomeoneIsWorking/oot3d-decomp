// OoT3D decomp @ 0010e930  name=FUN_0010e930  size=276

void FUN_0010e930(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar5 = DAT_0010ea44;
  iVar2 = *(int *)(param_1 + 0x124);
  if (iVar2 != 0) {
    param_3 = *(int *)(iVar2 + 0x13c);
  }
  if (iVar2 != 0 && param_3 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x2c);
    uVar4 = *(undefined4 *)(iVar2 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(iVar2 + 0xbc);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(iVar2 + 0xbe);
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(iVar2 + 0xc0);
    fVar8 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1a4);
    fVar6 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x1a8);
    fVar7 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x1ac);
    fVar5 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) * fVar5;
    *(float *)(param_1 + 0x1b0) = fVar5;
    if ((int)fVar5 < 0x3f800001) {
      fVar5 = DAT_0010ea48;
    }
    *(float *)(param_1 + 0x1b0) = fVar5;
    fVar6 = fVar6 * DAT_0010ea4c;
    fVar7 = fVar7 * DAT_0010ea4c;
    *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0x1a4) + fVar8 * DAT_0010ea4c;
    *(float *)(param_1 + 0x1a8) = *(float *)(param_1 + 0x1a8) + fVar6;
    *(float *)(param_1 + 0x1ac) = *(float *)(param_1 + 0x1ac) + fVar7;
    if ((*(byte *)(iVar2 + 0x305) & 1) == 0) {
      if (0x21 < *(byte *)(iVar2 + 0x304)) {
        return;
      }
      if (*(byte *)(param_1 + 0x1c0) < 0x23) goto LAB_0010ea2c;
      cVar1 = *(byte *)(param_1 + 0x1c0) - 0x19;
    }
    else {
      FUN_00375bcc(param_1,DAT_0010ea50);
      iVar2 = DAT_0010ea58;
      *(undefined4 *)(param_1 + 0x1b8) = DAT_0010ea54;
      *(undefined2 *)(iVar2 + param_1) = 0x20;
      cVar1 = -1;
    }
    *(char *)(param_1 + 0x1c0) = cVar1;
    return;
  }
LAB_0010ea2c:
  FUN_00374428(param_1);
  return;
}
