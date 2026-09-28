// OoT3D decomp @ 001da5a4  name=FUN_001da5a4  size=1036

void FUN_001da5a4(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r4;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 unaff_d8;
  float fVar13;
  undefined8 unaff_d9;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  float in_stack_0000004c;
  undefined4 in_stack_00000050;
  float in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  float in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  float in_stack_00000084;
  undefined4 uStack000000ac;
  undefined4 uStack000000b0;
  undefined4 uStack000000b4;
  float in_stack_000000b8;
  float in_stack_000000bc;
  float in_stack_000000c0;
  float in_stack_000000c8;
  float in_stack_000000cc;
  float in_stack_000000d0;
  float in_stack_000000d8;
  float in_stack_000000dc;
  float in_stack_000000e0;

  fVar13 = (float)((ulonglong)unaff_d8 >> 0x20);
  uStack000000b4 = in_stack_00000054;
  uStack000000ac = param_1;
  uStack000000b0 = param_2;
  func_0x0036c174(&stack0x00000088,&stack0x000000b8,&stack0x00000088);
  in_stack_00000050 = uRam001da8b0;
  in_stack_00000060 = 0;
  in_stack_0000005c = 0;
  in_stack_00000058 = 0x3f800000;
  in_stack_00000068 = 0;
  in_stack_0000006c = 0x3f800000;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000074 = uRam001da8b0;
  in_stack_0000007c = 0;
  in_stack_00000080 = 0x3f800000;
  in_stack_0000004c = fVar13;
  in_stack_00000054 = fVar13;
  in_stack_00000064 = fVar13;
  in_stack_00000084 = fVar13;
  func_0x0036c174(&stack0x00000058,&stack0x000000b8,&stack0x00000058);
  iVar3 = iRam001da8bc;
  puVar2 = puRam001da8b8;
  fVar1 = fRam001da8b4;
  fVar12 = (float)((ulonglong)unaff_d9 >> 0x20);
  if (*(int **)(unaff_r4 + 0x1a8) != (int *)0x0) {
    if (*(float *)(unaff_r4 + 0x1d0) <= fVar13) {
      (**(code **)(**(int **)(unaff_r4 + 0x1a8) + 8))();
    }
    else {
      in_stack_00000048 = *puRam001da8c0;
      in_stack_0000004c = (float)puRam001da8c0[1];
      in_stack_00000050 = puRam001da8c0[2];
      in_stack_00000054 = *(float *)(unaff_r4 + 0x1d0) * fRam001da8b4;
      uVar4 = FUN_003687a8(*(undefined4 *)(unaff_r4 + 0x1a8));
      FUN_003589cc(uVar4,5);
      FUN_00358964(uVar4,5,&stack0x00000048);
      FUN_003721e0(*(undefined4 *)(unaff_r4 + 0x1a8),&stack0x00000088);
      *(undefined1 *)(*(int *)(unaff_r4 + 0x1a8) + 0xac) = 1;
      if (((*puVar2 & 1) == 0) && (iVar5 = func_0x003679b4(puVar2), iVar5 != 0)) {
        func_0x0036788c(iVar3 + -0x180);
      }
      FUN_0033d220(iVar3,*(undefined4 *)(unaff_r4 + 0x1a8));
    }
  }
  bVar7 = *(int *)(unaff_r4 + 0x1a4) < 0;
  bVar8 = *(int *)(unaff_r4 + 0x1a4) == 0;
  bVar6 = false;
  if (!bVar8) {
    fVar9 = *(float *)(unaff_r4 + 0x1d4);
    bVar7 = fVar9 < fVar13;
    bVar8 = fVar9 == fVar13;
    bVar6 = NAN(fVar9) || NAN(fVar13);
  }
  if (!bVar8 && bVar7 == bVar6) {
    uVar4 = FUN_003687a8();
    in_stack_00000048 = *puRam001da8cc;
    in_stack_0000004c = (float)puRam001da8cc[1];
    in_stack_00000050 = puRam001da8cc[2];
    in_stack_00000054 = *(float *)(unaff_r4 + 0x1d4) * fVar1;
    FUN_003589cc(uVar4,5);
    FUN_00358964(uVar4,5,&stack0x00000048);
    in_stack_00000048 = *puRam001da8d0;
    in_stack_0000004c = (float)puRam001da8d0[1];
    in_stack_00000050 = puRam001da8d0[2];
    in_stack_00000054 = (float)puRam001da8d0[3];
    in_stack_00000038 = puRam001da8d0[4];
    in_stack_0000003c = puRam001da8d0[5];
    in_stack_00000040 = puRam001da8d0[6];
    in_stack_00000044 = puRam001da8d0[7];
    in_stack_00000028 = puRam001da8d0[8];
    in_stack_0000002c = puRam001da8d0[9];
    in_stack_00000030 = puRam001da8d0[10];
    in_stack_00000034 = puRam001da8d0[0xb];
    in_stack_00000018 = puRam001da8d0[0xc];
    in_stack_0000001c = puRam001da8d0[0xd];
    in_stack_00000020 = puRam001da8d0[0xe];
    in_stack_00000024 = puRam001da8d0[0xf];
    fVar9 = *(float *)(unaff_r4 + 0x1dc) * fVar1;
    if (0x3f800000 < (int)fVar9) {
      fVar9 = fVar12;
    }
    fVar10 = fVar9 * fRam001da8d4 - fVar12;
    fVar11 = fVar12 - fVar9 * fRam001da8d4;
    fVar9 = fRam001da8dc - fVar9 * fRam001da8d8;
    in_stack_0000000c =
         in_stack_000000b8 * fVar10 + in_stack_000000bc * fVar11 + in_stack_000000c0 * fVar9;
    in_stack_00000010 =
         in_stack_000000c8 * fVar10 + in_stack_000000cc * fVar11 + in_stack_000000d0 * fVar9;
    in_stack_00000014 =
         in_stack_000000d8 * fVar10 + in_stack_000000dc * fVar11 + in_stack_000000e0 * fVar9;
    fVar12 = fVar12 / SQRT(in_stack_0000000c * in_stack_0000000c +
                           in_stack_00000010 * in_stack_00000010 +
                           in_stack_00000014 * in_stack_00000014);
    in_stack_0000000c = in_stack_0000000c * fVar12;
    in_stack_00000010 = in_stack_00000010 * fVar12;
    in_stack_00000014 = in_stack_00000014 * fVar12;
    func_0x0033d200(uVar4,0);
    func_0x0033d174(uVar4,0,&stack0x00000048,&stack0x00000038);
    func_0x0033d14c(uVar4,0,&stack0x0000000c);
    FUN_003721e0(*(undefined4 *)(unaff_r4 + 0x1a4),&stack0x000000b8);
    *(undefined1 *)(*(int *)(unaff_r4 + 0x1a4) + 0xac) = 1;
    if (((*puVar2 & 1) == 0) && (iVar5 = func_0x003679b4(puRam001da8b8), iVar5 != 0)) {
      func_0x0036788c(uRam001da9f0);
    }
    FUN_0033d220(iVar3,*(undefined4 *)(unaff_r4 + 0x1a4));
  }
  bVar7 = *(int *)(unaff_r4 + 0x1ac) < 0;
  bVar8 = *(int *)(unaff_r4 + 0x1ac) == 0;
  bVar6 = false;
  if (!bVar8) {
    fVar12 = *(float *)(unaff_r4 + 0x1d8);
    bVar7 = fVar12 < fVar13;
    bVar8 = fVar12 == fVar13;
    bVar6 = NAN(fVar12) || NAN(fVar13);
  }
  if (!bVar8 && bVar7 == bVar6) {
    in_stack_00000048 = *puRam001da9f4;
    in_stack_0000004c = (float)puRam001da9f4[1];
    in_stack_00000050 = puRam001da9f4[2];
    in_stack_00000054 = *(float *)(unaff_r4 + 0x1d8) * fVar1;
    uVar4 = FUN_003687a8(*(undefined4 *)(unaff_r4 + 0x1ac));
    FUN_003589cc(uVar4,5);
    FUN_00358964(uVar4,5,&stack0x00000048);
    FUN_003721e0(*(undefined4 *)(unaff_r4 + 0x1ac),&stack0x00000058);
    *(undefined1 *)(*(int *)(unaff_r4 + 0x1ac) + 0xac) = 1;
    if (((*puVar2 & 1) == 0) && (iVar5 = func_0x003679b4(puRam001da8b8), iVar5 != 0)) {
      func_0x0036788c(uRam001da9f0);
    }
    FUN_0033d220(iVar3,*(undefined4 *)(unaff_r4 + 0x1ac));
  }
  return;
}
