// OoT3D decomp @ 003727f0  name=FUN_003727f0  size=392

/* WARNING: Restarted to delay deadcode elimination for space: stack */

float FUN_003727f0(float param_1)

{
  int iVar1;
  code **ppcVar2;
  code *in_lr;
  bool bVar3;
  float fVar4;
  code *local_10;
  code *local_4;
  
  ppcVar2 = &local_10;
  local_4 = in_lr;
  if ((uint)((int)param_1 * 2) < DAT_00372978) {
    if ((uint)((int)param_1 * 2) < 0x73000000) {
      local_10 = (code *)0xffffffff;
    }
    else {
      local_10 = (code *)0x0;
    }
  }
  else if (((uint)param_1 & 0x7fffffff) < DAT_0037297c) {
    bVar3 = ((uint)param_1 & 0x80000000) != 0;
    fVar4 = param_1 * DAT_00372980;
    if (bVar3) {
      fVar4 = fVar4 - DAT_00372984;
    }
    fVar4 = fVar4 + DAT_00372984;
    if (!bVar3) {
      fVar4 = fVar4 - DAT_00372984;
    }
    local_10 = (code *)((int)fVar4 & 3);
    param_1 = (((param_1 - fVar4 * DAT_00372988) - fVar4 * DAT_0037298c) - fVar4 * DAT_00372990) -
              fVar4 * DAT_00372994;
  }
  else {
    param_1 = (float)FUN_002c0b68(&local_10);
  }
  if (-1 < (int)local_10) {
    if (((uint)local_10 & 1) == 0) {
      fVar4 = param_1 * param_1;
      bVar3 = ((uint)local_10 & 2) == 0;
      ppcVar2 = &local_10;
      if (bVar3) {
        ppcVar2 = (code **)&stack0xfffffff4;
      }
      param_1 = param_1 + param_1 * (DAT_003729a4 + fVar4 * (DAT_003729a0 - fVar4 * DAT_0037299c)) *
                                    fVar4;
      if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x00372930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar4 = (float)(**(code **)((int)ppcVar2 + 8))();
        return fVar4;
      }
    }
    else {
      param_1 = param_1 * param_1;
      bVar3 = ((uint)local_10 & 2) == 0;
      if (bVar3) {
        ppcVar2 = &local_4;
      }
      param_1 = DAT_003729b4 +
                param_1 * (DAT_003729b0 + param_1 * (DAT_003729ac + param_1 * DAT_003729a8));
                    /* WARNING: Could not recover jumptable at 0x00372964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (bVar3) {
        fVar4 = (float)(**ppcVar2)();
        return fVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00372974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar4 = (float)(**(code **)((int)ppcVar2 + 0xc))(-param_1);
    return fVar4;
  }
  if ((uint)((int)param_1 * 2) < 0xff000000) {
    iVar1 = FUN_002c0b34(param_1);
    if (iVar1 == 4) {
      FUN_002c0b24();
    }
    return param_1;
  }
  if ((int)param_1 * 2 == 0xff000000) {
    FUN_002eb01c(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x003728f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar4 = (float)(*local_4)(DAT_00372998 / DAT_00372998);
    return fVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x003728d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(*local_4)();
  return fVar4;
}

