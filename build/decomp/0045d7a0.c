// OoT3D decomp @ 0045d7a0  name=FUN_0045d7a0  size=1040

void FUN_0045d7a0(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  uint *unaff_r8;
  undefined4 unaff_r9;
  bool bVar5;
  float fVar6;
  float fVar7;
  float unaff_s18;
  undefined4 unaff_s20;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_000000d0;
  float in_stack_000000d4;
  float in_stack_000000d8;
  float in_stack_000000e0;
  float in_stack_000000e4;
  float in_stack_000000e8;
  float in_stack_000000f0;
  float in_stack_000000f4;
  float in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  undefined4 in_stack_0000011c;

  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x002d7568(uVar2,0,&stack0x0000002c);
  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x0033d14c(uVar2,0,&stack0x0000004c);
  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x0033d200(uVar2,0);
  fVar6 = in_stack_000000d8 * in_stack_00000028;
  fVar7 = in_stack_000000e0 * in_stack_00000020;
  fVar1 = in_stack_000000e8 * in_stack_00000028;
  in_stack_00000028 =
       in_stack_000000f0 * in_stack_00000020 + in_stack_000000f4 * in_stack_00000024 +
       in_stack_000000f8 * in_stack_00000028;
  in_stack_00000020 =
       in_stack_000000d0 * in_stack_00000020 + in_stack_000000d4 * in_stack_00000024 + fVar6;
  in_stack_00000024 = fVar7 + in_stack_000000e4 * in_stack_00000024 + fVar1;
  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x002d75b0(uVar2,1,&stack0x00000010);
  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x002d7568(uVar2,1);
  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x0033d14c(uVar2,1,&stack0x00000020);
  uVar2 = FUN_003687a8(*(undefined4 *)(unaff_r7 + 0x874));
  func_0x0033d200(uVar2,1);
  if (((*unaff_r8 & 1) == 0) && (iVar3 = func_0x003679b4(uRam0045d4a0), iVar3 != 0)) {
    func_0x0036788c(uRam0045dbe0);
  }
  func_0x00330b98(uRam0045dbec,*(undefined4 *)(unaff_r7 + 0x874),0);
  in_stack_00000110 = *puRam0045dbf0;
  in_stack_00000114 = puRam0045dbf0[1];
  in_stack_00000118 = puRam0045dbf0[2];
  in_stack_0000011c = puRam0045dbf0[3];
  if (*(int *)(unaff_r4 + 0x8b0) != 0) {
    fVar6 = *(float *)(unaff_r5 + 0x260) + fRam0045dbf4;
    *(float *)(unaff_r5 + 0x260) = fVar6;
    if (0x3f800000 < (int)fVar6) {
      fVar6 = unaff_s18;
    }
    *(float *)(unaff_r5 + 0x260) = fVar6;
    iVar3 = iRam0045dbfc;
    iVar4 = *(int *)(unaff_r4 + 0x894);
    if (iVar4 == 0) {
      *(undefined4 *)(unaff_r5 + 0x260) = unaff_s20;
      *(undefined4 *)(unaff_r4 + 0x894) = unaff_r6;
    }
    else if (iVar4 == 1) {
      iVar3 = *(int *)(unaff_r4 + 0x89c);
joined_r0x0045da38:
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_r4 + 0x894) = unaff_r9;
      }
    }
    else {
      if (iVar4 == 2) {
        fVar6 = *(float *)(unaff_r5 + 0x22c) + fRam0045dbf8;
        *(float *)(unaff_r5 + 0x22c) = fVar6;
        if (iVar3 <= (int)fVar6) {
          *(undefined4 *)(unaff_r5 + 0x22c) = uRam0045dc00;
          *(undefined4 *)(unaff_r4 + 0x894) = 3;
        }
        iVar3 = *(int *)(unaff_r4 + 0x89c);
      }
      else {
        if (iVar4 != 3) {
          if (iVar4 != 4) goto LAB_0045da40;
          fVar6 = *(float *)(unaff_r5 + 0x22c) + fRam0045dc04;
          *(float *)(unaff_r5 + 0x22c) = fVar6;
          if ((int)fVar6 < 0x43000001) {
            *(undefined4 *)(unaff_r5 + 0x22c) = uRam0045dc08;
            *(undefined4 *)(unaff_r4 + 0x894) = unaff_r6;
          }
          iVar3 = *(int *)(unaff_r4 + 0x89c);
          goto joined_r0x0045da38;
        }
        iVar3 = *(int *)(unaff_r4 + 0x89c);
      }
      if (iVar3 == 1) {
        *(undefined4 *)(unaff_r4 + 0x894) = 4;
      }
    }
LAB_0045da40:
    func_0x002d7354(unaff_r4 + 0xa28,*(undefined4 *)(unaff_r4 + 0x8b0),&stack0x00000110,4);
  }
  if (*(int *)(unaff_r4 + 0x9e0) == 0) goto code_r0x0045db08;
  iVar3 = *(int *)(unaff_r4 + 0x890);
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_r5 + 0x214) = unaff_s20;
    *(undefined4 *)(unaff_r4 + 0x890) = unaff_r6;
  }
  else if (iVar3 == 1) {
    fVar6 = *(float *)(unaff_r5 + 0x214) + fRam0045dc0c;
    *(float *)(unaff_r5 + 0x214) = fVar6;
    if (0x3f800000 < (int)fVar6) {
      *(float *)(unaff_r5 + 0x214) = unaff_s18;
      *(undefined4 *)(unaff_r4 + 0x890) = unaff_r9;
    }
    if (*(int *)(unaff_r4 + 0x89c) == 0) {
      *(undefined4 *)(unaff_r5 + 0x214) = unaff_s20;
      *(undefined4 *)(unaff_r4 + 0x890) = 3;
    }
  }
  else if (iVar3 == 2) {
    if (*(int *)(unaff_r4 + 0x89c) == 0) {
      *(undefined4 *)(unaff_r4 + 0x890) = 3;
LAB_0045dae8:
      *(undefined4 *)(unaff_r5 + 0x214) = unaff_s20;
    }
  }
  else {
    bVar5 = iVar3 == 3;
    if (bVar5) {
      iVar3 = *(int *)(unaff_r4 + 0x89c);
    }
    if (bVar5 && iVar3 == 1) {
      *(undefined4 *)(unaff_r4 + 0x890) = unaff_r6;
      goto LAB_0045dae8;
    }
  }
  func_0x002d7354(unaff_r4 + 0x9ec,*(undefined4 *)(unaff_r4 + 0x9e0),&stack0x00000110,3);
code_r0x0045db08:
  in_stack_0000010c = func_0x004814dc();
  if (((*unaff_r8 & 1) == 0) && (iVar3 = func_0x003679b4(uRam0045d4a0), iVar3 != 0)) {
    func_0x0036788c(uRam0045dbe0);
  }
  uVar2 = uRam0045dc10;
  func_0x003339e8(uRam0045dc10,6,&stack0x00000100,0);
  if (((*unaff_r8 & 1) == 0) && (iVar3 = func_0x003679b4(uRam0045d4a0), iVar3 != 0)) {
    func_0x0036788c(uRam0045dbe0);
  }
  func_0x003339e8(uVar2,4,&stack0x00000100,0);
  return;
}
