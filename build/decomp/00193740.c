// OoT3D decomp @ 00193740  name=FUN_00193740  size=392

void FUN_00193740(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;

  iVar2 = FUN_00346e2c(DAT_001938cc,DAT_001938c8,param_2,param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_00346d94(param_2,param_1);
  }
  iVar3 = FUN_0036c5bc(param_2,0);
  uVar1 = DAT_001938d0;
  if (*(short *)(param_1 + 0x2a8e) != 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  iVar4 = DAT_001938d4;
  *(undefined4 *)(param_1 + 0x290) = uVar1;
  *(undefined4 *)(param_1 + 0x294) = uVar1;
  if (*(char *)(iVar4 + param_1) == '\0') {
    *(undefined1 *)(param_1 + 0x224c) = 1;
    fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar6 = DAT_001938d8;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x2a4c) + fVar5 * DAT_001938d8;
    fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x2a54) + fVar5 * fVar6;
  }
  if ((DAT_001938dc < *(int *)(param_1 + 0x98)) &&
     (iVar4 = FUN_0035f228(param_2,param_1), iVar4 == 0)) {
    if (iVar2 == 0) {
      return;
    }
  }
  else if (iVar2 == 0) goto LAB_001938b0;
  *(undefined1 *)(param_1 + 0x2aa0) = 1;
  uVar1 = DAT_001938e0;
  *(undefined2 *)(param_1 + 0x2a8c) = *(undefined2 *)(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x2a88) = uVar1;
  *param_3 = 1;
  *(undefined1 *)(param_1 + 0x2a99) = 0;
  iVar2 = (int)(short)(*(short *)(iVar3 + 0x184) - *(short *)(param_1 + 0x2a8c));
  fVar6 = (float)FUN_002cfca0(iVar2);
  *(short *)(param_3 + 3) = (short)(char)(int)(fVar6 * *(float *)(param_1 + 0x2a88));
  fVar6 = (float)FUN_00338f60(iVar2);
  *(short *)((int)param_3 + 0xe) = (short)(char)(int)(fVar6 * *(float *)(param_1 + 0x2a88));
LAB_001938b0:
  FUN_0034f724(param_2);
  *(undefined1 *)(param_1 + 0x2a9d) = 1;
  return;
}
