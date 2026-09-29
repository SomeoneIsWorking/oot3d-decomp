// OoT3D decomp @ 001af900  name=FUN_001af900  size=712

void FUN_001af900(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float local_34 [3];
  int local_28;

  iVar4 = 0;
  local_34[0] = *DAT_001afbd4;
  local_34[1] = DAT_001afbd4[1];
  local_34[2] = DAT_001afbd4[2];
  local_28 = param_2 + 0x5c78;
  do {
    iVar6 = param_1 + iVar4 * 0x58;
    FUN_0037632c(param_1,iVar6 + 0x3f8);
    fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(iVar6 + 0x444) = *(float *)(param_1 + 0x444) + local_34[iVar4] * fVar8;
    fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(iVar6 + 0x44c) = *(float *)(param_1 + 0x44c) - local_34[iVar4] * fVar8;
    FUN_003762a4(param_2,local_28,iVar6 + 0x3f8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  if ((*(int *)(param_1 + 0x1d4) == 7) &&
     (iVar4 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_001afbd8,param_1 + 0x1a4),
     iVar4 != 0)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_001afbdc,1);
  }
  FUN_00370734(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x510) < 1) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x510) + -1;
  }
  *(short *)(param_1 + 0x510) = sVar3;
  if (sVar3 < 3) {
    *(char *)(param_1 + 0x50d) = (char)sVar3;
  }
  cVar1 = *(char *)(param_1 + 0x50a);
  if (cVar1 == '\0') {
    if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e);
    }
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    if (sVar3 == 0) {
      *(undefined1 *)(param_1 + 0x50d) = 2;
    }
  }
  else if (cVar1 == '\x03' && sVar3 == 0) {
    *(undefined1 *)(param_1 + 0x50d) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x50b);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x50e) = 1;
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x50e) = 2;
  }
  else if (cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0x50e) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x50e) = 0;
  }
  uVar2 = DAT_001afbe8;
  iVar4 = DAT_001afbe4;
  if (*(char *)(param_1 + 0x50c) == '\x01') {
    *(undefined1 *)(param_1 + 0x50f) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x50f) = 0;
  }
  iVar6 = *(int *)(DAT_001afbe0 + param_2);
  uVar5 = *(undefined4 *)(iVar6 + 0x2c);
  uVar7 = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(param_1 + 0x570) = uVar5;
  *(undefined4 *)(param_1 + 0x574) = uVar7;
  *(undefined4 *)(param_1 + 0x568) = uVar2;
  FUN_0034c664(param_1,param_1 + 0x554,3,
               *(int *)(param_1 + 0x3f4) == iVar4 || *(short *)(param_1 + 0x554) == 0);
  if (*(int *)(param_1 + 0x3f4) == iVar4) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  }
  else {
    FUN_0036b96c();
  }
  FUN_00376340(DAT_001afbec,DAT_001afbec,DAT_001afbec,param_2,param_1,4);
  if (*(int *)(param_1 + 0x3f4) != DAT_001afbf0) {
    FUN_00342714(*(float *)(param_1 + 0x438) + DAT_001afbf8,param_2,param_1,param_1 + 0x554,
                 DAT_001afbfc,DAT_001afbf4);
  }
                    /* WARNING: Could not recover jumptable at 0x001afbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x3f4))(param_1,param_2);
  return;
}
