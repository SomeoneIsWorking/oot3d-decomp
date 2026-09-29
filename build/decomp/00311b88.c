// OoT3D decomp @ 00311b88  name=FUN_00311b88  size=220

void FUN_00311b88(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *in_r12;

  puVar1 = DAT_00311c6c;
  puVar3 = *(undefined4 **)(DAT_00311c64 + *(int *)(DAT_00311c64 + 0x124) * 4 + 0x128);
  if (param_1 != DAT_00311c68) {
    if (param_1 < DAT_00311c68) {
      if (param_1 == 0x8051) {
        iVar4 = 3;
        goto LAB_00311bfc;
      }
      if (param_1 != 0x8056) {
        return;
      }
    }
    else {
      if (param_1 - DAT_00311c68 == 1) {
        iVar4 = 4;
        goto LAB_00311bfc;
      }
      if (param_1 - DAT_00311c68 != 0xd0b) {
        return;
      }
    }
  }
  iVar4 = 2;
LAB_00311bfc:
  if ((param_4 == 0x10000 || param_4 == 0x20000) || param_4 == 0x30000) {
    if (puVar3[1] != 0) {
      in_r12 = (code *)DAT_00311c6c[1];
    }
    if (puVar3[1] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(puVar3[5],0x104,*puVar3);
    }
    uVar2 = 0;
    if ((code *)*puVar1 != (code *)0x0) {
      uVar2 = (*(code *)*puVar1)(param_4,0x104,*puVar3,iVar4 * param_2 * param_3);
    }
    puVar3[1] = uVar2;
    puVar3[2] = param_1;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
    puVar3[5] = param_4;
  }
  return;
}
