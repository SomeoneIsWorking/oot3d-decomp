// OoT3D decomp @ 003555d8  name=FUN_003555d8  size=360

/* WARNING: Restarted to delay deadcode elimination for space: stack */

float FUN_003555d8(float param_1)

{
  int iVar1;
  uint *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar3;
  float fVar4;
  uint local_10;
  
  if ((uint)((int)param_1 * 2) < DAT_00355740) {
    if ((uint)((int)param_1 * 2) < 0x73000000) {
      local_10 = 0xffffffff;
    }
    else {
      local_10 = 0;
    }
  }
  else if (((uint)param_1 & 0x7fffffff) < DAT_00355744) {
    bVar3 = ((uint)param_1 & 0x80000000) != 0;
    fVar4 = param_1 * DAT_00355748;
    if (bVar3) {
      fVar4 = fVar4 - DAT_0035574c;
    }
    fVar4 = fVar4 + DAT_0035574c;
    if (!bVar3) {
      fVar4 = fVar4 - DAT_0035574c;
    }
    local_10 = (int)fVar4 & 3;
    param_1 = (((param_1 - fVar4 * DAT_00355750) - fVar4 * DAT_00355754) - fVar4 * DAT_00355758) -
              fVar4 * DAT_0035575c;
  }
  else {
    param_1 = (float)FUN_002c0b68(&local_10);
  }
  if (-1 < (int)local_10) {
    fVar4 = param_1 * param_1;
    bVar3 = (local_10 & 1) == 0;
    puVar2 = &local_10;
    if (bVar3) {
      puVar2 = (uint *)&stack0xfffffff4;
    }
    if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x00355728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar4 = (float)(**(code **)((int)puVar2 + 8))();
      return fVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x0035573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar4 = (float)(**(code **)((int)puVar2 + 0xc))
                             (DAT_0035577c /
                              (param_1 +
                              param_1 * (DAT_00355778 +
                                        fVar4 * (DAT_00355774 +
                                                fVar4 * (DAT_00355770 +
                                                        fVar4 * (DAT_0035576c +
                                                                fVar4 * (DAT_00355768 +
                                                                        fVar4 * DAT_00355764))))) *
                                        fVar4));
    return fVar4;
  }
  if ((uint)((int)param_1 * 2) < 0xff000000) {
    iVar1 = FUN_002c0b34(param_1);
    if (iVar1 == 4) {
      FUN_002c0b24();
    }
    return param_1;
  }
  if ((int)param_1 * 2 != 0xff000000) {
                    /* WARNING: Could not recover jumptable at 0x003556c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar4 = (float)(*UNRECOVERED_JUMPTABLE_00)();
    return fVar4;
  }
  FUN_002eb01c(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x003556dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(*UNRECOVERED_JUMPTABLE_00)(DAT_00355760 / DAT_00355760);
  return fVar4;
}

